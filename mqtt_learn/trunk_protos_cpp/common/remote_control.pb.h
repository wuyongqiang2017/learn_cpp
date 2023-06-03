// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/remote_control.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fremote_5fcontrol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2fremote_5fcontrol_2eproto

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
#include "./header.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2fremote_5fcontrol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fremote_5fcontrol_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fremote_5fcontrol_2eproto;
namespace common {
class RCControl;
class RCControlDefaultTypeInternal;
extern RCControlDefaultTypeInternal _RCControl_default_instance_;
class RCVehicleCmd;
class RCVehicleCmdDefaultTypeInternal;
extern RCVehicleCmdDefaultTypeInternal _RCVehicleCmd_default_instance_;
class TaskMaunal;
class TaskMaunalDefaultTypeInternal;
extern TaskMaunalDefaultTypeInternal _TaskMaunal_default_instance_;
class TempStayPoint;
class TempStayPointDefaultTypeInternal;
extern TempStayPointDefaultTypeInternal _TempStayPoint_default_instance_;
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> ::common::RCControl* Arena::CreateMaybeMessage<::common::RCControl>(Arena*);
template<> ::common::RCVehicleCmd* Arena::CreateMaybeMessage<::common::RCVehicleCmd>(Arena*);
template<> ::common::TaskMaunal* Arena::CreateMaybeMessage<::common::TaskMaunal>(Arena*);
template<> ::common::TempStayPoint* Arena::CreateMaybeMessage<::common::TempStayPoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace common {

// ===================================================================

class TaskMaunal :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.TaskMaunal) */ {
 public:
  TaskMaunal();
  virtual ~TaskMaunal();

  TaskMaunal(const TaskMaunal& from);
  TaskMaunal(TaskMaunal&& from) noexcept
    : TaskMaunal() {
    *this = ::std::move(from);
  }

  inline TaskMaunal& operator=(const TaskMaunal& from) {
    CopyFrom(from);
    return *this;
  }
  inline TaskMaunal& operator=(TaskMaunal&& from) noexcept {
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
  static const TaskMaunal& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TaskMaunal* internal_default_instance() {
    return reinterpret_cast<const TaskMaunal*>(
               &_TaskMaunal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TaskMaunal& a, TaskMaunal& b) {
    a.Swap(&b);
  }
  inline void Swap(TaskMaunal* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TaskMaunal* New() const final {
    return CreateMaybeMessage<TaskMaunal>(nullptr);
  }

  TaskMaunal* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TaskMaunal>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TaskMaunal& from);
  void MergeFrom(const TaskMaunal& from);
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
  void InternalSwap(TaskMaunal* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.TaskMaunal";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fremote_5fcontrol_2eproto);
    return ::descriptor_table_common_2fremote_5fcontrol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kTaskModeFieldNumber = 2,
  };
  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // uint32 task_mode = 2;
  void clear_task_mode();
  ::PROTOBUF_NAMESPACE_ID::uint32 task_mode() const;
  void set_task_mode(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:common.TaskMaunal)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::common::Header* header_;
  ::PROTOBUF_NAMESPACE_ID::uint32 task_mode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fremote_5fcontrol_2eproto;
};
// -------------------------------------------------------------------

class TempStayPoint :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.TempStayPoint) */ {
 public:
  TempStayPoint();
  virtual ~TempStayPoint();

  TempStayPoint(const TempStayPoint& from);
  TempStayPoint(TempStayPoint&& from) noexcept
    : TempStayPoint() {
    *this = ::std::move(from);
  }

  inline TempStayPoint& operator=(const TempStayPoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline TempStayPoint& operator=(TempStayPoint&& from) noexcept {
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
  static const TempStayPoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TempStayPoint* internal_default_instance() {
    return reinterpret_cast<const TempStayPoint*>(
               &_TempStayPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TempStayPoint& a, TempStayPoint& b) {
    a.Swap(&b);
  }
  inline void Swap(TempStayPoint* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TempStayPoint* New() const final {
    return CreateMaybeMessage<TempStayPoint>(nullptr);
  }

  TempStayPoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TempStayPoint>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TempStayPoint& from);
  void MergeFrom(const TempStayPoint& from);
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
  void InternalSwap(TempStayPoint* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.TempStayPoint";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fremote_5fcontrol_2eproto);
    return ::descriptor_table_common_2fremote_5fcontrol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kXFieldNumber = 3,
    kYFieldNumber = 4,
    kYawFieldNumber = 5,
    kIdFieldNumber = 2,
  };
  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // double x = 3;
  void clear_x();
  double x() const;
  void set_x(double value);

  // double y = 4;
  void clear_y();
  double y() const;
  void set_y(double value);

  // double yaw = 5;
  void clear_yaw();
  double yaw() const;
  void set_yaw(double value);

  // int32 id = 2;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:common.TempStayPoint)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::common::Header* header_;
  double x_;
  double y_;
  double yaw_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fremote_5fcontrol_2eproto;
};
// -------------------------------------------------------------------

class RCControl :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.RCControl) */ {
 public:
  RCControl();
  virtual ~RCControl();

  RCControl(const RCControl& from);
  RCControl(RCControl&& from) noexcept
    : RCControl() {
    *this = ::std::move(from);
  }

  inline RCControl& operator=(const RCControl& from) {
    CopyFrom(from);
    return *this;
  }
  inline RCControl& operator=(RCControl&& from) noexcept {
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
  static const RCControl& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RCControl* internal_default_instance() {
    return reinterpret_cast<const RCControl*>(
               &_RCControl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(RCControl& a, RCControl& b) {
    a.Swap(&b);
  }
  inline void Swap(RCControl* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RCControl* New() const final {
    return CreateMaybeMessage<RCControl>(nullptr);
  }

  RCControl* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RCControl>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RCControl& from);
  void MergeFrom(const RCControl& from);
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
  void InternalSwap(RCControl* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.RCControl";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fremote_5fcontrol_2eproto);
    return ::descriptor_table_common_2fremote_5fcontrol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kIdFieldNumber = 2,
    kTaskModeFieldNumber = 3,
    kControlFieldNumber = 4,
  };
  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // int32 id = 2;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // uint32 task_mode = 3;
  void clear_task_mode();
  ::PROTOBUF_NAMESPACE_ID::uint32 task_mode() const;
  void set_task_mode(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 control = 4;
  void clear_control();
  ::PROTOBUF_NAMESPACE_ID::uint32 control() const;
  void set_control(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:common.RCControl)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::common::Header* header_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 task_mode_;
  ::PROTOBUF_NAMESPACE_ID::uint32 control_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fremote_5fcontrol_2eproto;
};
// -------------------------------------------------------------------

class RCVehicleCmd :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.RCVehicleCmd) */ {
 public:
  RCVehicleCmd();
  virtual ~RCVehicleCmd();

  RCVehicleCmd(const RCVehicleCmd& from);
  RCVehicleCmd(RCVehicleCmd&& from) noexcept
    : RCVehicleCmd() {
    *this = ::std::move(from);
  }

  inline RCVehicleCmd& operator=(const RCVehicleCmd& from) {
    CopyFrom(from);
    return *this;
  }
  inline RCVehicleCmd& operator=(RCVehicleCmd&& from) noexcept {
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
  static const RCVehicleCmd& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RCVehicleCmd* internal_default_instance() {
    return reinterpret_cast<const RCVehicleCmd*>(
               &_RCVehicleCmd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(RCVehicleCmd& a, RCVehicleCmd& b) {
    a.Swap(&b);
  }
  inline void Swap(RCVehicleCmd* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RCVehicleCmd* New() const final {
    return CreateMaybeMessage<RCVehicleCmd>(nullptr);
  }

  RCVehicleCmd* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RCVehicleCmd>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RCVehicleCmd& from);
  void MergeFrom(const RCVehicleCmd& from);
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
  void InternalSwap(RCVehicleCmd* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.RCVehicleCmd";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fremote_5fcontrol_2eproto);
    return ::descriptor_table_common_2fremote_5fcontrol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kIdFieldNumber = 2,
    kFrontWheelAngleFieldNumber = 3,
    kBackWheelAngleFieldNumber = 4,
    kExpectedSpeedFieldNumber = 5,
    kExpectedDistanceFieldNumber = 6,
    kExpectedDurationFieldNumber = 7,
    kGearFieldNumber = 8,
  };
  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // int32 id = 2;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // float front_wheel_angle = 3;
  void clear_front_wheel_angle();
  float front_wheel_angle() const;
  void set_front_wheel_angle(float value);

  // float back_wheel_angle = 4;
  void clear_back_wheel_angle();
  float back_wheel_angle() const;
  void set_back_wheel_angle(float value);

  // float expected_speed = 5;
  void clear_expected_speed();
  float expected_speed() const;
  void set_expected_speed(float value);

  // float expected_distance = 6;
  void clear_expected_distance();
  float expected_distance() const;
  void set_expected_distance(float value);

  // uint32 expected_duration = 7;
  void clear_expected_duration();
  ::PROTOBUF_NAMESPACE_ID::uint32 expected_duration() const;
  void set_expected_duration(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 gear = 8;
  void clear_gear();
  ::PROTOBUF_NAMESPACE_ID::uint32 gear() const;
  void set_gear(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:common.RCVehicleCmd)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::common::Header* header_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  float front_wheel_angle_;
  float back_wheel_angle_;
  float expected_speed_;
  float expected_distance_;
  ::PROTOBUF_NAMESPACE_ID::uint32 expected_duration_;
  ::PROTOBUF_NAMESPACE_ID::uint32 gear_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fremote_5fcontrol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TaskMaunal

// .common.Header header = 1;
inline bool TaskMaunal::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& TaskMaunal::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.TaskMaunal.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* TaskMaunal::release_header() {
  // @@protoc_insertion_point(field_release:common.TaskMaunal.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* TaskMaunal::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.TaskMaunal.header)
  return header_;
}
inline void TaskMaunal::set_allocated_header(::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:common.TaskMaunal.header)
}

// uint32 task_mode = 2;
inline void TaskMaunal::clear_task_mode() {
  task_mode_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TaskMaunal::task_mode() const {
  // @@protoc_insertion_point(field_get:common.TaskMaunal.task_mode)
  return task_mode_;
}
inline void TaskMaunal::set_task_mode(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  task_mode_ = value;
  // @@protoc_insertion_point(field_set:common.TaskMaunal.task_mode)
}

// -------------------------------------------------------------------

// TempStayPoint

// .common.Header header = 1;
inline bool TempStayPoint::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& TempStayPoint::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.TempStayPoint.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* TempStayPoint::release_header() {
  // @@protoc_insertion_point(field_release:common.TempStayPoint.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* TempStayPoint::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.TempStayPoint.header)
  return header_;
}
inline void TempStayPoint::set_allocated_header(::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:common.TempStayPoint.header)
}

// int32 id = 2;
inline void TempStayPoint::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TempStayPoint::id() const {
  // @@protoc_insertion_point(field_get:common.TempStayPoint.id)
  return id_;
}
inline void TempStayPoint::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:common.TempStayPoint.id)
}

// double x = 3;
inline void TempStayPoint::clear_x() {
  x_ = 0;
}
inline double TempStayPoint::x() const {
  // @@protoc_insertion_point(field_get:common.TempStayPoint.x)
  return x_;
}
inline void TempStayPoint::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:common.TempStayPoint.x)
}

// double y = 4;
inline void TempStayPoint::clear_y() {
  y_ = 0;
}
inline double TempStayPoint::y() const {
  // @@protoc_insertion_point(field_get:common.TempStayPoint.y)
  return y_;
}
inline void TempStayPoint::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:common.TempStayPoint.y)
}

// double yaw = 5;
inline void TempStayPoint::clear_yaw() {
  yaw_ = 0;
}
inline double TempStayPoint::yaw() const {
  // @@protoc_insertion_point(field_get:common.TempStayPoint.yaw)
  return yaw_;
}
inline void TempStayPoint::set_yaw(double value) {
  
  yaw_ = value;
  // @@protoc_insertion_point(field_set:common.TempStayPoint.yaw)
}

// -------------------------------------------------------------------

// RCControl

// .common.Header header = 1;
inline bool RCControl::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& RCControl::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.RCControl.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* RCControl::release_header() {
  // @@protoc_insertion_point(field_release:common.RCControl.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* RCControl::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.RCControl.header)
  return header_;
}
inline void RCControl::set_allocated_header(::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:common.RCControl.header)
}

// int32 id = 2;
inline void RCControl::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RCControl::id() const {
  // @@protoc_insertion_point(field_get:common.RCControl.id)
  return id_;
}
inline void RCControl::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:common.RCControl.id)
}

// uint32 task_mode = 3;
inline void RCControl::clear_task_mode() {
  task_mode_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RCControl::task_mode() const {
  // @@protoc_insertion_point(field_get:common.RCControl.task_mode)
  return task_mode_;
}
inline void RCControl::set_task_mode(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  task_mode_ = value;
  // @@protoc_insertion_point(field_set:common.RCControl.task_mode)
}

// uint32 control = 4;
inline void RCControl::clear_control() {
  control_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RCControl::control() const {
  // @@protoc_insertion_point(field_get:common.RCControl.control)
  return control_;
}
inline void RCControl::set_control(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  control_ = value;
  // @@protoc_insertion_point(field_set:common.RCControl.control)
}

// -------------------------------------------------------------------

// RCVehicleCmd

// .common.Header header = 1;
inline bool RCVehicleCmd::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& RCVehicleCmd::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* RCVehicleCmd::release_header() {
  // @@protoc_insertion_point(field_release:common.RCVehicleCmd.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* RCVehicleCmd::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.RCVehicleCmd.header)
  return header_;
}
inline void RCVehicleCmd::set_allocated_header(::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:common.RCVehicleCmd.header)
}

// int32 id = 2;
inline void RCVehicleCmd::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RCVehicleCmd::id() const {
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.id)
  return id_;
}
inline void RCVehicleCmd::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:common.RCVehicleCmd.id)
}

// float front_wheel_angle = 3;
inline void RCVehicleCmd::clear_front_wheel_angle() {
  front_wheel_angle_ = 0;
}
inline float RCVehicleCmd::front_wheel_angle() const {
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.front_wheel_angle)
  return front_wheel_angle_;
}
inline void RCVehicleCmd::set_front_wheel_angle(float value) {
  
  front_wheel_angle_ = value;
  // @@protoc_insertion_point(field_set:common.RCVehicleCmd.front_wheel_angle)
}

// float back_wheel_angle = 4;
inline void RCVehicleCmd::clear_back_wheel_angle() {
  back_wheel_angle_ = 0;
}
inline float RCVehicleCmd::back_wheel_angle() const {
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.back_wheel_angle)
  return back_wheel_angle_;
}
inline void RCVehicleCmd::set_back_wheel_angle(float value) {
  
  back_wheel_angle_ = value;
  // @@protoc_insertion_point(field_set:common.RCVehicleCmd.back_wheel_angle)
}

// float expected_speed = 5;
inline void RCVehicleCmd::clear_expected_speed() {
  expected_speed_ = 0;
}
inline float RCVehicleCmd::expected_speed() const {
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.expected_speed)
  return expected_speed_;
}
inline void RCVehicleCmd::set_expected_speed(float value) {
  
  expected_speed_ = value;
  // @@protoc_insertion_point(field_set:common.RCVehicleCmd.expected_speed)
}

// float expected_distance = 6;
inline void RCVehicleCmd::clear_expected_distance() {
  expected_distance_ = 0;
}
inline float RCVehicleCmd::expected_distance() const {
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.expected_distance)
  return expected_distance_;
}
inline void RCVehicleCmd::set_expected_distance(float value) {
  
  expected_distance_ = value;
  // @@protoc_insertion_point(field_set:common.RCVehicleCmd.expected_distance)
}

// uint32 expected_duration = 7;
inline void RCVehicleCmd::clear_expected_duration() {
  expected_duration_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RCVehicleCmd::expected_duration() const {
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.expected_duration)
  return expected_duration_;
}
inline void RCVehicleCmd::set_expected_duration(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  expected_duration_ = value;
  // @@protoc_insertion_point(field_set:common.RCVehicleCmd.expected_duration)
}

// uint32 gear = 8;
inline void RCVehicleCmd::clear_gear() {
  gear_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RCVehicleCmd::gear() const {
  // @@protoc_insertion_point(field_get:common.RCVehicleCmd.gear)
  return gear_;
}
inline void RCVehicleCmd::set_gear(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  gear_ = value;
  // @@protoc_insertion_point(field_set:common.RCVehicleCmd.gear)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2fremote_5fcontrol_2eproto
