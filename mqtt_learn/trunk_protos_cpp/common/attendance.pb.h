// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/attendance.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fattendance_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2fattendance_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "./enums.pb.h"
#include "./header.pb.h"
#include "./point.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2fattendance_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fattendance_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fattendance_2eproto;
namespace common {
class Attendance;
class AttendanceDefaultTypeInternal;
extern AttendanceDefaultTypeInternal _Attendance_default_instance_;
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> ::common::Attendance* Arena::CreateMaybeMessage<::common::Attendance>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace common {

// ===================================================================

class Attendance :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.Attendance) */ {
 public:
  Attendance();
  virtual ~Attendance();

  Attendance(const Attendance& from);
  Attendance(Attendance&& from) noexcept
    : Attendance() {
    *this = ::std::move(from);
  }

  inline Attendance& operator=(const Attendance& from) {
    CopyFrom(from);
    return *this;
  }
  inline Attendance& operator=(Attendance&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Attendance& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Attendance* internal_default_instance() {
    return reinterpret_cast<const Attendance*>(
               &_Attendance_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Attendance& a, Attendance& b) {
    a.Swap(&b);
  }
  inline void Swap(Attendance* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Attendance* New() const final {
    return CreateMaybeMessage<Attendance>(nullptr);
  }

  Attendance* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Attendance>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Attendance& from);
  void MergeFrom(const Attendance& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Attendance* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.Attendance";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fattendance_2eproto);
    return ::descriptor_table_common_2fattendance_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHostFieldNumber = 3,
    kPortFieldNumber = 4,
    kHeaderFieldNumber = 1,
    kPointFieldNumber = 5,
    kStateFieldNumber = 2,
    kYawFieldNumber = 6,
    kSocFieldNumber = 7,
    kLogoutTypeFieldNumber = 8,
  };
  // string host = 3;
  void clear_host();
  const std::string& host() const;
  void set_host(const std::string& value);
  void set_host(std::string&& value);
  void set_host(const char* value);
  void set_host(const char* value, size_t size);
  std::string* mutable_host();
  std::string* release_host();
  void set_allocated_host(std::string* host);

  // string port = 4;
  void clear_port();
  const std::string& port() const;
  void set_port(const std::string& value);
  void set_port(std::string&& value);
  void set_port(const char* value);
  void set_port(const char* value, size_t size);
  std::string* mutable_port();
  std::string* release_port();
  void set_allocated_port(std::string* port);

  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // .common.Point point = 5;
  bool has_point() const;
  void clear_point();
  const ::common::Point& point() const;
  ::common::Point* release_point();
  ::common::Point* mutable_point();
  void set_allocated_point(::common::Point* point);

  // .common.AttendanceState state = 2;
  void clear_state();
  ::common::AttendanceState state() const;
  void set_state(::common::AttendanceState value);

  // float yaw = 6;
  void clear_yaw();
  float yaw() const;
  void set_yaw(float value);

  // int32 soc = 7;
  void clear_soc();
  ::PROTOBUF_NAMESPACE_ID::int32 soc() const;
  void set_soc(::PROTOBUF_NAMESPACE_ID::int32 value);

  // .common.LogoutType logout_type = 8;
  void clear_logout_type();
  ::common::LogoutType logout_type() const;
  void set_logout_type(::common::LogoutType value);

  // @@protoc_insertion_point(class_scope:common.Attendance)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr host_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr port_;
  ::common::Header* header_;
  ::common::Point* point_;
  int state_;
  float yaw_;
  ::PROTOBUF_NAMESPACE_ID::int32 soc_;
  int logout_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fattendance_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Attendance

// .common.Header header = 1;
inline bool Attendance::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& Attendance::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.Attendance.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* Attendance::release_header() {
  // @@protoc_insertion_point(field_release:common.Attendance.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* Attendance::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.Attendance.header)
  return header_;
}
inline void Attendance::set_allocated_header(::common::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:common.Attendance.header)
}

// .common.AttendanceState state = 2;
inline void Attendance::clear_state() {
  state_ = 0;
}
inline ::common::AttendanceState Attendance::state() const {
  // @@protoc_insertion_point(field_get:common.Attendance.state)
  return static_cast< ::common::AttendanceState >(state_);
}
inline void Attendance::set_state(::common::AttendanceState value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:common.Attendance.state)
}

// string host = 3;
inline void Attendance::clear_host() {
  host_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Attendance::host() const {
  // @@protoc_insertion_point(field_get:common.Attendance.host)
  return host_.GetNoArena();
}
inline void Attendance::set_host(const std::string& value) {
  
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.Attendance.host)
}
inline void Attendance::set_host(std::string&& value) {
  
  host_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.Attendance.host)
}
inline void Attendance::set_host(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.Attendance.host)
}
inline void Attendance::set_host(const char* value, size_t size) {
  
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.Attendance.host)
}
inline std::string* Attendance::mutable_host() {
  
  // @@protoc_insertion_point(field_mutable:common.Attendance.host)
  return host_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Attendance::release_host() {
  // @@protoc_insertion_point(field_release:common.Attendance.host)
  
  return host_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Attendance::set_allocated_host(std::string* host) {
  if (host != nullptr) {
    
  } else {
    
  }
  host_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), host);
  // @@protoc_insertion_point(field_set_allocated:common.Attendance.host)
}

// string port = 4;
inline void Attendance::clear_port() {
  port_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Attendance::port() const {
  // @@protoc_insertion_point(field_get:common.Attendance.port)
  return port_.GetNoArena();
}
inline void Attendance::set_port(const std::string& value) {
  
  port_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.Attendance.port)
}
inline void Attendance::set_port(std::string&& value) {
  
  port_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.Attendance.port)
}
inline void Attendance::set_port(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  port_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.Attendance.port)
}
inline void Attendance::set_port(const char* value, size_t size) {
  
  port_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.Attendance.port)
}
inline std::string* Attendance::mutable_port() {
  
  // @@protoc_insertion_point(field_mutable:common.Attendance.port)
  return port_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Attendance::release_port() {
  // @@protoc_insertion_point(field_release:common.Attendance.port)
  
  return port_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Attendance::set_allocated_port(std::string* port) {
  if (port != nullptr) {
    
  } else {
    
  }
  port_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), port);
  // @@protoc_insertion_point(field_set_allocated:common.Attendance.port)
}

// .common.Point point = 5;
inline bool Attendance::has_point() const {
  return this != internal_default_instance() && point_ != nullptr;
}
inline const ::common::Point& Attendance::point() const {
  const ::common::Point* p = point_;
  // @@protoc_insertion_point(field_get:common.Attendance.point)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Point*>(
      &::common::_Point_default_instance_);
}
inline ::common::Point* Attendance::release_point() {
  // @@protoc_insertion_point(field_release:common.Attendance.point)
  
  ::common::Point* temp = point_;
  point_ = nullptr;
  return temp;
}
inline ::common::Point* Attendance::mutable_point() {
  
  if (point_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Point>(GetArenaNoVirtual());
    point_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.Attendance.point)
  return point_;
}
inline void Attendance::set_allocated_point(::common::Point* point) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(point_);
  }
  if (point) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      point = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, point, submessage_arena);
    }
    
  } else {
    
  }
  point_ = point;
  // @@protoc_insertion_point(field_set_allocated:common.Attendance.point)
}

// float yaw = 6;
inline void Attendance::clear_yaw() {
  yaw_ = 0;
}
inline float Attendance::yaw() const {
  // @@protoc_insertion_point(field_get:common.Attendance.yaw)
  return yaw_;
}
inline void Attendance::set_yaw(float value) {
  
  yaw_ = value;
  // @@protoc_insertion_point(field_set:common.Attendance.yaw)
}

// int32 soc = 7;
inline void Attendance::clear_soc() {
  soc_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Attendance::soc() const {
  // @@protoc_insertion_point(field_get:common.Attendance.soc)
  return soc_;
}
inline void Attendance::set_soc(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  soc_ = value;
  // @@protoc_insertion_point(field_set:common.Attendance.soc)
}

// .common.LogoutType logout_type = 8;
inline void Attendance::clear_logout_type() {
  logout_type_ = 0;
}
inline ::common::LogoutType Attendance::logout_type() const {
  // @@protoc_insertion_point(field_get:common.Attendance.logout_type)
  return static_cast< ::common::LogoutType >(logout_type_);
}
inline void Attendance::set_logout_type(::common::LogoutType value) {
  
  logout_type_ = value;
  // @@protoc_insertion_point(field_set:common.Attendance.logout_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2fattendance_2eproto
