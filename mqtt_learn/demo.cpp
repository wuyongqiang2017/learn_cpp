#include "mqtt/async_client.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

const std::string SERVER_ADDRESS("tcp://10.169.96.77:1883");
const std::string CLIENT_ID("wyq_local_cpp");
const std::string TOPIC("+/from/v2/act_status/notify/+");
const int QOS = 0;

class callback : public virtual mqtt::callback {
public:
  virtual void connection_lost(const std::string &cause) override {
    std::cout << "Connection lost: " << cause << std::endl;
  }

  virtual void message_arrived(mqtt::const_message_ptr msg) override {
    std::cout << "Message arrived: " << msg->get_payload_str() << std::endl;
  }

  virtual void delivery_complete(mqtt::delivery_token_ptr token) override {
    std::cout << "Delivery complete" << std::endl;
  }
};

int main(int argc, char *argv[]) {
  mqtt::async_client client(SERVER_ADDRESS, CLIENT_ID);
  callback cb;
  client.set_callback(cb);

  mqtt::connect_options conn_opts;
  conn_opts.set_keep_alive_interval(20);
  conn_opts.set_clean_session(true);

  try {
    mqtt::token_ptr conntok = client.connect(conn_opts);
    conntok->wait();

    mqtt::token_ptr subtok = client.subscribe(TOPIC, 0);
    subtok->wait();

    while (true) {

    }

    mqtt::token_ptr unsubtok = client.unsubscribe(TOPIC);
    unsubtok->wait();

    client.disconnect()->wait();
  } catch (const mqtt::exception &exc) {
    std::cerr << "Error: " << exc.what() << std::endl;
    return 1;
  }

  return 0;
}