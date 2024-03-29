// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/task_control.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2ftask_5fcontrol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2ftask_5fcontrol_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_common_2ftask_5fcontrol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2ftask_5fcontrol_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2ftask_5fcontrol_2eproto;
namespace common {
class TaskControl;
class TaskControlDefaultTypeInternal;
extern TaskControlDefaultTypeInternal _TaskControl_default_instance_;
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> ::common::TaskControl* Arena::CreateMaybeMessage<::common::TaskControl>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace common {

// ===================================================================

class TaskControl :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.TaskControl) */ {
 public:
  TaskControl();
  virtual ~TaskControl();

  TaskControl(const TaskControl& from);
  TaskControl(TaskControl&& from) noexcept
    : TaskControl() {
    *this = ::std::move(from);
  }

  inline TaskControl& operator=(const TaskControl& from) {
    CopyFrom(from);
    return *this;
  }
  inline TaskControl& operator=(TaskControl&& from) noexcept {
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
  static const TaskControl& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TaskControl* internal_default_instance() {
    return reinterpret_cast<const TaskControl*>(
               &_TaskControl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TaskControl& a, TaskControl& b) {
    a.Swap(&b);
  }
  inline void Swap(TaskControl* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TaskControl* New() const final {
    return CreateMaybeMessage<TaskControl>(nullptr);
  }

  TaskControl* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TaskControl>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TaskControl& from);
  void MergeFrom(const TaskControl& from);
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
  void InternalSwap(TaskControl* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.TaskControl";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2ftask_5fcontrol_2eproto);
    return ::descriptor_table_common_2ftask_5fcontrol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSenderFieldNumber = 2,
    kTaskIdFieldNumber = 3,
    kHeaderFieldNumber = 1,
    kStopPointFieldNumber = 5,
    kTypeFieldNumber = 4,
  };
  // string sender = 2;
  void clear_sender();
  const std::string& sender() const;
  void set_sender(const std::string& value);
  void set_sender(std::string&& value);
  void set_sender(const char* value);
  void set_sender(const char* value, size_t size);
  std::string* mutable_sender();
  std::string* release_sender();
  void set_allocated_sender(std::string* sender);

  // string task_id = 3;
  void clear_task_id();
  const std::string& task_id() const;
  void set_task_id(const std::string& value);
  void set_task_id(std::string&& value);
  void set_task_id(const char* value);
  void set_task_id(const char* value, size_t size);
  std::string* mutable_task_id();
  std::string* release_task_id();
  void set_allocated_task_id(std::string* task_id);

  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // .common.Point stop_point = 5;
  bool has_stop_point() const;
  void clear_stop_point();
  const ::common::Point& stop_point() const;
  ::common::Point* release_stop_point();
  ::common::Point* mutable_stop_point();
  void set_allocated_stop_point(::common::Point* stop_point);

  // .common.ControlType type = 4;
  void clear_type();
  ::common::ControlType type() const;
  void set_type(::common::ControlType value);

  // @@protoc_insertion_point(class_scope:common.TaskControl)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sender_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr task_id_;
  ::common::Header* header_;
  ::common::Point* stop_point_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2ftask_5fcontrol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TaskControl

// .common.Header header = 1;
inline bool TaskControl::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& TaskControl::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.TaskControl.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* TaskControl::release_header() {
  // @@protoc_insertion_point(field_release:common.TaskControl.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* TaskControl::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.TaskControl.header)
  return header_;
}
inline void TaskControl::set_allocated_header(::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:common.TaskControl.header)
}

// string sender = 2;
inline void TaskControl::clear_sender() {
  sender_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TaskControl::sender() const {
  // @@protoc_insertion_point(field_get:common.TaskControl.sender)
  return sender_.GetNoArena();
}
inline void TaskControl::set_sender(const std::string& value) {
  
  sender_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.TaskControl.sender)
}
inline void TaskControl::set_sender(std::string&& value) {
  
  sender_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.TaskControl.sender)
}
inline void TaskControl::set_sender(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sender_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.TaskControl.sender)
}
inline void TaskControl::set_sender(const char* value, size_t size) {
  
  sender_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.TaskControl.sender)
}
inline std::string* TaskControl::mutable_sender() {
  
  // @@protoc_insertion_point(field_mutable:common.TaskControl.sender)
  return sender_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TaskControl::release_sender() {
  // @@protoc_insertion_point(field_release:common.TaskControl.sender)
  
  return sender_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TaskControl::set_allocated_sender(std::string* sender) {
  if (sender != nullptr) {
    
  } else {
    
  }
  sender_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sender);
  // @@protoc_insertion_point(field_set_allocated:common.TaskControl.sender)
}

// string task_id = 3;
inline void TaskControl::clear_task_id() {
  task_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TaskControl::task_id() const {
  // @@protoc_insertion_point(field_get:common.TaskControl.task_id)
  return task_id_.GetNoArena();
}
inline void TaskControl::set_task_id(const std::string& value) {
  
  task_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.TaskControl.task_id)
}
inline void TaskControl::set_task_id(std::string&& value) {
  
  task_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.TaskControl.task_id)
}
inline void TaskControl::set_task_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  task_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.TaskControl.task_id)
}
inline void TaskControl::set_task_id(const char* value, size_t size) {
  
  task_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.TaskControl.task_id)
}
inline std::string* TaskControl::mutable_task_id() {
  
  // @@protoc_insertion_point(field_mutable:common.TaskControl.task_id)
  return task_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TaskControl::release_task_id() {
  // @@protoc_insertion_point(field_release:common.TaskControl.task_id)
  
  return task_id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TaskControl::set_allocated_task_id(std::string* task_id) {
  if (task_id != nullptr) {
    
  } else {
    
  }
  task_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), task_id);
  // @@protoc_insertion_point(field_set_allocated:common.TaskControl.task_id)
}

// .common.ControlType type = 4;
inline void TaskControl::clear_type() {
  type_ = 0;
}
inline ::common::ControlType TaskControl::type() const {
  // @@protoc_insertion_point(field_get:common.TaskControl.type)
  return static_cast< ::common::ControlType >(type_);
}
inline void TaskControl::set_type(::common::ControlType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:common.TaskControl.type)
}

// .common.Point stop_point = 5;
inline bool TaskControl::has_stop_point() const {
  return this != internal_default_instance() && stop_point_ != nullptr;
}
inline const ::common::Point& TaskControl::stop_point() const {
  const ::common::Point* p = stop_point_;
  // @@protoc_insertion_point(field_get:common.TaskControl.stop_point)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Point*>(
      &::common::_Point_default_instance_);
}
inline ::common::Point* TaskControl::release_stop_point() {
  // @@protoc_insertion_point(field_release:common.TaskControl.stop_point)
  
  ::common::Point* temp = stop_point_;
  stop_point_ = nullptr;
  return temp;
}
inline ::common::Point* TaskControl::mutable_stop_point() {
  
  if (stop_point_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Point>(GetArenaNoVirtual());
    stop_point_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.TaskControl.stop_point)
  return stop_point_;
}
inline void TaskControl::set_allocated_stop_point(::common::Point* stop_point) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(stop_point_);
  }
  if (stop_point) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      stop_point = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stop_point, submessage_arena);
    }
    
  } else {
    
  }
  stop_point_ = stop_point;
  // @@protoc_insertion_point(field_set_allocated:common.TaskControl.stop_point)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2ftask_5fcontrol_2eproto
