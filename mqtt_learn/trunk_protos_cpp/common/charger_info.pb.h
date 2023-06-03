// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/charger_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fcharger_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2fcharger_5finfo_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "./header.pb.h"
#include "./point.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2fcharger_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fcharger_5finfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fcharger_5finfo_2eproto;
namespace common {
class ChargerInfo;
class ChargerInfoDefaultTypeInternal;
extern ChargerInfoDefaultTypeInternal _ChargerInfo_default_instance_;
class LaserVisionData;
class LaserVisionDataDefaultTypeInternal;
extern LaserVisionDataDefaultTypeInternal _LaserVisionData_default_instance_;
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> ::common::ChargerInfo* Arena::CreateMaybeMessage<::common::ChargerInfo>(Arena*);
template<> ::common::LaserVisionData* Arena::CreateMaybeMessage<::common::LaserVisionData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace common {

enum UseType : int {
  LASER = 0,
  VISION = 1,
  UseType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  UseType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool UseType_IsValid(int value);
constexpr UseType UseType_MIN = LASER;
constexpr UseType UseType_MAX = VISION;
constexpr int UseType_ARRAYSIZE = UseType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* UseType_descriptor();
template<typename T>
inline const std::string& UseType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, UseType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function UseType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    UseType_descriptor(), enum_t_value);
}
inline bool UseType_Parse(
    const std::string& name, UseType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<UseType>(
    UseType_descriptor(), name, value);
}
// ===================================================================

class ChargerInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.ChargerInfo) */ {
 public:
  ChargerInfo();
  virtual ~ChargerInfo();

  ChargerInfo(const ChargerInfo& from);
  ChargerInfo(ChargerInfo&& from) noexcept
    : ChargerInfo() {
    *this = ::std::move(from);
  }

  inline ChargerInfo& operator=(const ChargerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChargerInfo& operator=(ChargerInfo&& from) noexcept {
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
  static const ChargerInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ChargerInfo* internal_default_instance() {
    return reinterpret_cast<const ChargerInfo*>(
               &_ChargerInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChargerInfo& a, ChargerInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ChargerInfo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ChargerInfo* New() const final {
    return CreateMaybeMessage<ChargerInfo>(nullptr);
  }

  ChargerInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChargerInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ChargerInfo& from);
  void MergeFrom(const ChargerInfo& from);
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
  void InternalSwap(ChargerInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.ChargerInfo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fcharger_5finfo_2eproto);
    return ::descriptor_table_common_2fcharger_5finfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLaserDataFieldNumber = 2,
    kVisionDataFieldNumber = 3,
    kChargerNumFieldNumber = 11,
    kHeaderFieldNumber = 1,
    kArrivedPointFieldNumber = 16,
    kAlignPointFieldNumber = 17,
    kSubLaserMsgFieldNumber = 4,
    kSubVisionMsgFieldNumber = 5,
    kInvalidLaserMsgFieldNumber = 6,
    kInvalidVisionMsgFieldNumber = 7,
    kLaserOffsetFieldNumber = 8,
    kVisionOffsetFieldNumber = 9,
    kUseTypeFieldNumber = 10,
    kOffsetFieldNumber = 12,
    kRealOffsetFieldNumber = 13,
    kPncOffsetFieldNumber = 14,
    kStandardValueFieldNumber = 15,
    kAlignTimeoutFieldNumber = 18,
  };
  // repeated .common.LaserVisionData laser_data = 2;
  int laser_data_size() const;
  void clear_laser_data();
  ::common::LaserVisionData* mutable_laser_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >*
      mutable_laser_data();
  const ::common::LaserVisionData& laser_data(int index) const;
  ::common::LaserVisionData* add_laser_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >&
      laser_data() const;

  // repeated .common.LaserVisionData vision_data = 3;
  int vision_data_size() const;
  void clear_vision_data();
  ::common::LaserVisionData* mutable_vision_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >*
      mutable_vision_data();
  const ::common::LaserVisionData& vision_data(int index) const;
  ::common::LaserVisionData* add_vision_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >&
      vision_data() const;

  // string charger_num = 11;
  void clear_charger_num();
  const std::string& charger_num() const;
  void set_charger_num(const std::string& value);
  void set_charger_num(std::string&& value);
  void set_charger_num(const char* value);
  void set_charger_num(const char* value, size_t size);
  std::string* mutable_charger_num();
  std::string* release_charger_num();
  void set_allocated_charger_num(std::string* charger_num);

  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // .common.Point arrived_point = 16;
  bool has_arrived_point() const;
  void clear_arrived_point();
  const ::common::Point& arrived_point() const;
  ::common::Point* release_arrived_point();
  ::common::Point* mutable_arrived_point();
  void set_allocated_arrived_point(::common::Point* arrived_point);

  // .common.Point align_point = 17;
  bool has_align_point() const;
  void clear_align_point();
  const ::common::Point& align_point() const;
  ::common::Point* release_align_point();
  ::common::Point* mutable_align_point();
  void set_allocated_align_point(::common::Point* align_point);

  // bool sub_laser_msg = 4;
  void clear_sub_laser_msg();
  bool sub_laser_msg() const;
  void set_sub_laser_msg(bool value);

  // bool sub_vision_msg = 5;
  void clear_sub_vision_msg();
  bool sub_vision_msg() const;
  void set_sub_vision_msg(bool value);

  // bool invalid_laser_msg = 6;
  void clear_invalid_laser_msg();
  bool invalid_laser_msg() const;
  void set_invalid_laser_msg(bool value);

  // bool invalid_vision_msg = 7;
  void clear_invalid_vision_msg();
  bool invalid_vision_msg() const;
  void set_invalid_vision_msg(bool value);

  // float laser_offset = 8;
  void clear_laser_offset();
  float laser_offset() const;
  void set_laser_offset(float value);

  // float vision_offset = 9;
  void clear_vision_offset();
  float vision_offset() const;
  void set_vision_offset(float value);

  // .common.UseType use_type = 10;
  void clear_use_type();
  ::common::UseType use_type() const;
  void set_use_type(::common::UseType value);

  // float offset = 12;
  void clear_offset();
  float offset() const;
  void set_offset(float value);

  // float real_offset = 13;
  void clear_real_offset();
  float real_offset() const;
  void set_real_offset(float value);

  // float pnc_offset = 14;
  void clear_pnc_offset();
  float pnc_offset() const;
  void set_pnc_offset(float value);

  // float standard_value = 15;
  void clear_standard_value();
  float standard_value() const;
  void set_standard_value(float value);

  // bool align_timeout = 18;
  void clear_align_timeout();
  bool align_timeout() const;
  void set_align_timeout(bool value);

  // @@protoc_insertion_point(class_scope:common.ChargerInfo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData > laser_data_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData > vision_data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr charger_num_;
  ::common::Header* header_;
  ::common::Point* arrived_point_;
  ::common::Point* align_point_;
  bool sub_laser_msg_;
  bool sub_vision_msg_;
  bool invalid_laser_msg_;
  bool invalid_vision_msg_;
  float laser_offset_;
  float vision_offset_;
  int use_type_;
  float offset_;
  float real_offset_;
  float pnc_offset_;
  float standard_value_;
  bool align_timeout_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fcharger_5finfo_2eproto;
};
// -------------------------------------------------------------------

class LaserVisionData :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.LaserVisionData) */ {
 public:
  LaserVisionData();
  virtual ~LaserVisionData();

  LaserVisionData(const LaserVisionData& from);
  LaserVisionData(LaserVisionData&& from) noexcept
    : LaserVisionData() {
    *this = ::std::move(from);
  }

  inline LaserVisionData& operator=(const LaserVisionData& from) {
    CopyFrom(from);
    return *this;
  }
  inline LaserVisionData& operator=(LaserVisionData&& from) noexcept {
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
  static const LaserVisionData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LaserVisionData* internal_default_instance() {
    return reinterpret_cast<const LaserVisionData*>(
               &_LaserVisionData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LaserVisionData& a, LaserVisionData& b) {
    a.Swap(&b);
  }
  inline void Swap(LaserVisionData* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LaserVisionData* New() const final {
    return CreateMaybeMessage<LaserVisionData>(nullptr);
  }

  LaserVisionData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LaserVisionData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LaserVisionData& from);
  void MergeFrom(const LaserVisionData& from);
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
  void InternalSwap(LaserVisionData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.LaserVisionData";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fcharger_5finfo_2eproto);
    return ::descriptor_table_common_2fcharger_5finfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOffsetFieldNumber = 1,
    kInvalidFieldNumber = 2,
  };
  // float offset = 1;
  void clear_offset();
  float offset() const;
  void set_offset(float value);

  // bool invalid = 2;
  void clear_invalid();
  bool invalid() const;
  void set_invalid(bool value);

  // @@protoc_insertion_point(class_scope:common.LaserVisionData)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float offset_;
  bool invalid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fcharger_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChargerInfo

// .common.Header header = 1;
inline bool ChargerInfo::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& ChargerInfo::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.ChargerInfo.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* ChargerInfo::release_header() {
  // @@protoc_insertion_point(field_release:common.ChargerInfo.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* ChargerInfo::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.ChargerInfo.header)
  return header_;
}
inline void ChargerInfo::set_allocated_header(::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:common.ChargerInfo.header)
}

// repeated .common.LaserVisionData laser_data = 2;
inline int ChargerInfo::laser_data_size() const {
  return laser_data_.size();
}
inline void ChargerInfo::clear_laser_data() {
  laser_data_.Clear();
}
inline ::common::LaserVisionData* ChargerInfo::mutable_laser_data(int index) {
  // @@protoc_insertion_point(field_mutable:common.ChargerInfo.laser_data)
  return laser_data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >*
ChargerInfo::mutable_laser_data() {
  // @@protoc_insertion_point(field_mutable_list:common.ChargerInfo.laser_data)
  return &laser_data_;
}
inline const ::common::LaserVisionData& ChargerInfo::laser_data(int index) const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.laser_data)
  return laser_data_.Get(index);
}
inline ::common::LaserVisionData* ChargerInfo::add_laser_data() {
  // @@protoc_insertion_point(field_add:common.ChargerInfo.laser_data)
  return laser_data_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >&
ChargerInfo::laser_data() const {
  // @@protoc_insertion_point(field_list:common.ChargerInfo.laser_data)
  return laser_data_;
}

// repeated .common.LaserVisionData vision_data = 3;
inline int ChargerInfo::vision_data_size() const {
  return vision_data_.size();
}
inline void ChargerInfo::clear_vision_data() {
  vision_data_.Clear();
}
inline ::common::LaserVisionData* ChargerInfo::mutable_vision_data(int index) {
  // @@protoc_insertion_point(field_mutable:common.ChargerInfo.vision_data)
  return vision_data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >*
ChargerInfo::mutable_vision_data() {
  // @@protoc_insertion_point(field_mutable_list:common.ChargerInfo.vision_data)
  return &vision_data_;
}
inline const ::common::LaserVisionData& ChargerInfo::vision_data(int index) const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.vision_data)
  return vision_data_.Get(index);
}
inline ::common::LaserVisionData* ChargerInfo::add_vision_data() {
  // @@protoc_insertion_point(field_add:common.ChargerInfo.vision_data)
  return vision_data_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::common::LaserVisionData >&
ChargerInfo::vision_data() const {
  // @@protoc_insertion_point(field_list:common.ChargerInfo.vision_data)
  return vision_data_;
}

// bool sub_laser_msg = 4;
inline void ChargerInfo::clear_sub_laser_msg() {
  sub_laser_msg_ = false;
}
inline bool ChargerInfo::sub_laser_msg() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.sub_laser_msg)
  return sub_laser_msg_;
}
inline void ChargerInfo::set_sub_laser_msg(bool value) {
  
  sub_laser_msg_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.sub_laser_msg)
}

// bool sub_vision_msg = 5;
inline void ChargerInfo::clear_sub_vision_msg() {
  sub_vision_msg_ = false;
}
inline bool ChargerInfo::sub_vision_msg() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.sub_vision_msg)
  return sub_vision_msg_;
}
inline void ChargerInfo::set_sub_vision_msg(bool value) {
  
  sub_vision_msg_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.sub_vision_msg)
}

// bool invalid_laser_msg = 6;
inline void ChargerInfo::clear_invalid_laser_msg() {
  invalid_laser_msg_ = false;
}
inline bool ChargerInfo::invalid_laser_msg() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.invalid_laser_msg)
  return invalid_laser_msg_;
}
inline void ChargerInfo::set_invalid_laser_msg(bool value) {
  
  invalid_laser_msg_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.invalid_laser_msg)
}

// bool invalid_vision_msg = 7;
inline void ChargerInfo::clear_invalid_vision_msg() {
  invalid_vision_msg_ = false;
}
inline bool ChargerInfo::invalid_vision_msg() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.invalid_vision_msg)
  return invalid_vision_msg_;
}
inline void ChargerInfo::set_invalid_vision_msg(bool value) {
  
  invalid_vision_msg_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.invalid_vision_msg)
}

// float laser_offset = 8;
inline void ChargerInfo::clear_laser_offset() {
  laser_offset_ = 0;
}
inline float ChargerInfo::laser_offset() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.laser_offset)
  return laser_offset_;
}
inline void ChargerInfo::set_laser_offset(float value) {
  
  laser_offset_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.laser_offset)
}

// float vision_offset = 9;
inline void ChargerInfo::clear_vision_offset() {
  vision_offset_ = 0;
}
inline float ChargerInfo::vision_offset() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.vision_offset)
  return vision_offset_;
}
inline void ChargerInfo::set_vision_offset(float value) {
  
  vision_offset_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.vision_offset)
}

// .common.UseType use_type = 10;
inline void ChargerInfo::clear_use_type() {
  use_type_ = 0;
}
inline ::common::UseType ChargerInfo::use_type() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.use_type)
  return static_cast< ::common::UseType >(use_type_);
}
inline void ChargerInfo::set_use_type(::common::UseType value) {
  
  use_type_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.use_type)
}

// string charger_num = 11;
inline void ChargerInfo::clear_charger_num() {
  charger_num_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ChargerInfo::charger_num() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.charger_num)
  return charger_num_.GetNoArena();
}
inline void ChargerInfo::set_charger_num(const std::string& value) {
  
  charger_num_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.ChargerInfo.charger_num)
}
inline void ChargerInfo::set_charger_num(std::string&& value) {
  
  charger_num_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.ChargerInfo.charger_num)
}
inline void ChargerInfo::set_charger_num(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  charger_num_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.ChargerInfo.charger_num)
}
inline void ChargerInfo::set_charger_num(const char* value, size_t size) {
  
  charger_num_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.ChargerInfo.charger_num)
}
inline std::string* ChargerInfo::mutable_charger_num() {
  
  // @@protoc_insertion_point(field_mutable:common.ChargerInfo.charger_num)
  return charger_num_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ChargerInfo::release_charger_num() {
  // @@protoc_insertion_point(field_release:common.ChargerInfo.charger_num)
  
  return charger_num_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ChargerInfo::set_allocated_charger_num(std::string* charger_num) {
  if (charger_num != nullptr) {
    
  } else {
    
  }
  charger_num_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), charger_num);
  // @@protoc_insertion_point(field_set_allocated:common.ChargerInfo.charger_num)
}

// float offset = 12;
inline void ChargerInfo::clear_offset() {
  offset_ = 0;
}
inline float ChargerInfo::offset() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.offset)
  return offset_;
}
inline void ChargerInfo::set_offset(float value) {
  
  offset_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.offset)
}

// float real_offset = 13;
inline void ChargerInfo::clear_real_offset() {
  real_offset_ = 0;
}
inline float ChargerInfo::real_offset() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.real_offset)
  return real_offset_;
}
inline void ChargerInfo::set_real_offset(float value) {
  
  real_offset_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.real_offset)
}

// float pnc_offset = 14;
inline void ChargerInfo::clear_pnc_offset() {
  pnc_offset_ = 0;
}
inline float ChargerInfo::pnc_offset() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.pnc_offset)
  return pnc_offset_;
}
inline void ChargerInfo::set_pnc_offset(float value) {
  
  pnc_offset_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.pnc_offset)
}

// float standard_value = 15;
inline void ChargerInfo::clear_standard_value() {
  standard_value_ = 0;
}
inline float ChargerInfo::standard_value() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.standard_value)
  return standard_value_;
}
inline void ChargerInfo::set_standard_value(float value) {
  
  standard_value_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.standard_value)
}

// .common.Point arrived_point = 16;
inline bool ChargerInfo::has_arrived_point() const {
  return this != internal_default_instance() && arrived_point_ != nullptr;
}
inline const ::common::Point& ChargerInfo::arrived_point() const {
  const ::common::Point* p = arrived_point_;
  // @@protoc_insertion_point(field_get:common.ChargerInfo.arrived_point)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Point*>(
      &::common::_Point_default_instance_);
}
inline ::common::Point* ChargerInfo::release_arrived_point() {
  // @@protoc_insertion_point(field_release:common.ChargerInfo.arrived_point)
  
  ::common::Point* temp = arrived_point_;
  arrived_point_ = nullptr;
  return temp;
}
inline ::common::Point* ChargerInfo::mutable_arrived_point() {
  
  if (arrived_point_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Point>(GetArenaNoVirtual());
    arrived_point_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.ChargerInfo.arrived_point)
  return arrived_point_;
}
inline void ChargerInfo::set_allocated_arrived_point(::common::Point* arrived_point) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(arrived_point_);
  }
  if (arrived_point) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      arrived_point = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, arrived_point, submessage_arena);
    }
    
  } else {
    
  }
  arrived_point_ = arrived_point;
  // @@protoc_insertion_point(field_set_allocated:common.ChargerInfo.arrived_point)
}

// .common.Point align_point = 17;
inline bool ChargerInfo::has_align_point() const {
  return this != internal_default_instance() && align_point_ != nullptr;
}
inline const ::common::Point& ChargerInfo::align_point() const {
  const ::common::Point* p = align_point_;
  // @@protoc_insertion_point(field_get:common.ChargerInfo.align_point)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Point*>(
      &::common::_Point_default_instance_);
}
inline ::common::Point* ChargerInfo::release_align_point() {
  // @@protoc_insertion_point(field_release:common.ChargerInfo.align_point)
  
  ::common::Point* temp = align_point_;
  align_point_ = nullptr;
  return temp;
}
inline ::common::Point* ChargerInfo::mutable_align_point() {
  
  if (align_point_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Point>(GetArenaNoVirtual());
    align_point_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.ChargerInfo.align_point)
  return align_point_;
}
inline void ChargerInfo::set_allocated_align_point(::common::Point* align_point) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(align_point_);
  }
  if (align_point) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      align_point = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, align_point, submessage_arena);
    }
    
  } else {
    
  }
  align_point_ = align_point;
  // @@protoc_insertion_point(field_set_allocated:common.ChargerInfo.align_point)
}

// bool align_timeout = 18;
inline void ChargerInfo::clear_align_timeout() {
  align_timeout_ = false;
}
inline bool ChargerInfo::align_timeout() const {
  // @@protoc_insertion_point(field_get:common.ChargerInfo.align_timeout)
  return align_timeout_;
}
inline void ChargerInfo::set_align_timeout(bool value) {
  
  align_timeout_ = value;
  // @@protoc_insertion_point(field_set:common.ChargerInfo.align_timeout)
}

// -------------------------------------------------------------------

// LaserVisionData

// float offset = 1;
inline void LaserVisionData::clear_offset() {
  offset_ = 0;
}
inline float LaserVisionData::offset() const {
  // @@protoc_insertion_point(field_get:common.LaserVisionData.offset)
  return offset_;
}
inline void LaserVisionData::set_offset(float value) {
  
  offset_ = value;
  // @@protoc_insertion_point(field_set:common.LaserVisionData.offset)
}

// bool invalid = 2;
inline void LaserVisionData::clear_invalid() {
  invalid_ = false;
}
inline bool LaserVisionData::invalid() const {
  // @@protoc_insertion_point(field_get:common.LaserVisionData.invalid)
  return invalid_;
}
inline void LaserVisionData::set_invalid(bool value) {
  
  invalid_ = value;
  // @@protoc_insertion_point(field_set:common.LaserVisionData.invalid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace common

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::common::UseType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::common::UseType>() {
  return ::common::UseType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2fcharger_5finfo_2eproto