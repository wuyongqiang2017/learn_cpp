// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/reply.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2freply_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2freply_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_common_2freply_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2freply_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2freply_2eproto;
namespace common {
class ErrorBody;
class ErrorBodyDefaultTypeInternal;
extern ErrorBodyDefaultTypeInternal _ErrorBody_default_instance_;
class Reply;
class ReplyDefaultTypeInternal;
extern ReplyDefaultTypeInternal _Reply_default_instance_;
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> ::common::ErrorBody* Arena::CreateMaybeMessage<::common::ErrorBody>(Arena*);
template<> ::common::Reply* Arena::CreateMaybeMessage<::common::Reply>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace common {

// ===================================================================

class ErrorBody :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.ErrorBody) */ {
 public:
  ErrorBody();
  virtual ~ErrorBody();

  ErrorBody(const ErrorBody& from);
  ErrorBody(ErrorBody&& from) noexcept
    : ErrorBody() {
    *this = ::std::move(from);
  }

  inline ErrorBody& operator=(const ErrorBody& from) {
    CopyFrom(from);
    return *this;
  }
  inline ErrorBody& operator=(ErrorBody&& from) noexcept {
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
  static const ErrorBody& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ErrorBody* internal_default_instance() {
    return reinterpret_cast<const ErrorBody*>(
               &_ErrorBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ErrorBody& a, ErrorBody& b) {
    a.Swap(&b);
  }
  inline void Swap(ErrorBody* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ErrorBody* New() const final {
    return CreateMaybeMessage<ErrorBody>(nullptr);
  }

  ErrorBody* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ErrorBody>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ErrorBody& from);
  void MergeFrom(const ErrorBody& from);
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
  void InternalSwap(ErrorBody* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.ErrorBody";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2freply_2eproto);
    return ::descriptor_table_common_2freply_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorCodeFieldNumber = 1,
    kErrorMsgFieldNumber = 2,
  };
  // string error_code = 1;
  void clear_error_code();
  const std::string& error_code() const;
  void set_error_code(const std::string& value);
  void set_error_code(std::string&& value);
  void set_error_code(const char* value);
  void set_error_code(const char* value, size_t size);
  std::string* mutable_error_code();
  std::string* release_error_code();
  void set_allocated_error_code(std::string* error_code);

  // string error_msg = 2;
  void clear_error_msg();
  const std::string& error_msg() const;
  void set_error_msg(const std::string& value);
  void set_error_msg(std::string&& value);
  void set_error_msg(const char* value);
  void set_error_msg(const char* value, size_t size);
  std::string* mutable_error_msg();
  std::string* release_error_msg();
  void set_allocated_error_msg(std::string* error_msg);

  // @@protoc_insertion_point(class_scope:common.ErrorBody)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_code_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_msg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2freply_2eproto;
};
// -------------------------------------------------------------------

class Reply :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:common.Reply) */ {
 public:
  Reply();
  virtual ~Reply();

  Reply(const Reply& from);
  Reply(Reply&& from) noexcept
    : Reply() {
    *this = ::std::move(from);
  }

  inline Reply& operator=(const Reply& from) {
    CopyFrom(from);
    return *this;
  }
  inline Reply& operator=(Reply&& from) noexcept {
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
  static const Reply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Reply* internal_default_instance() {
    return reinterpret_cast<const Reply*>(
               &_Reply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Reply& a, Reply& b) {
    a.Swap(&b);
  }
  inline void Swap(Reply* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Reply* New() const final {
    return CreateMaybeMessage<Reply>(nullptr);
  }

  Reply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Reply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Reply& from);
  void MergeFrom(const Reply& from);
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
  void InternalSwap(Reply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "common.Reply";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2freply_2eproto);
    return ::descriptor_table_common_2freply_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFlagIdFieldNumber = 3,
    kReplyMsgNameFieldNumber = 5,
    kHeaderFieldNumber = 1,
    kErrorBodyFieldNumber = 4,
    kStatusCodeFieldNumber = 2,
  };
  // string flag_id = 3;
  void clear_flag_id();
  const std::string& flag_id() const;
  void set_flag_id(const std::string& value);
  void set_flag_id(std::string&& value);
  void set_flag_id(const char* value);
  void set_flag_id(const char* value, size_t size);
  std::string* mutable_flag_id();
  std::string* release_flag_id();
  void set_allocated_flag_id(std::string* flag_id);

  // string reply_msg_name = 5;
  void clear_reply_msg_name();
  const std::string& reply_msg_name() const;
  void set_reply_msg_name(const std::string& value);
  void set_reply_msg_name(std::string&& value);
  void set_reply_msg_name(const char* value);
  void set_reply_msg_name(const char* value, size_t size);
  std::string* mutable_reply_msg_name();
  std::string* release_reply_msg_name();
  void set_allocated_reply_msg_name(std::string* reply_msg_name);

  // .common.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::common::Header& header() const;
  ::common::Header* release_header();
  ::common::Header* mutable_header();
  void set_allocated_header(::common::Header* header);

  // .common.ErrorBody error_body = 4;
  bool has_error_body() const;
  void clear_error_body();
  const ::common::ErrorBody& error_body() const;
  ::common::ErrorBody* release_error_body();
  ::common::ErrorBody* mutable_error_body();
  void set_allocated_error_body(::common::ErrorBody* error_body);

  // sint32 status_code = 2;
  void clear_status_code();
  ::PROTOBUF_NAMESPACE_ID::int32 status_code() const;
  void set_status_code(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:common.Reply)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr flag_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reply_msg_name_;
  ::common::Header* header_;
  ::common::ErrorBody* error_body_;
  ::PROTOBUF_NAMESPACE_ID::int32 status_code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2freply_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ErrorBody

// string error_code = 1;
inline void ErrorBody::clear_error_code() {
  error_code_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ErrorBody::error_code() const {
  // @@protoc_insertion_point(field_get:common.ErrorBody.error_code)
  return error_code_.GetNoArena();
}
inline void ErrorBody::set_error_code(const std::string& value) {
  
  error_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.ErrorBody.error_code)
}
inline void ErrorBody::set_error_code(std::string&& value) {
  
  error_code_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.ErrorBody.error_code)
}
inline void ErrorBody::set_error_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  error_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.ErrorBody.error_code)
}
inline void ErrorBody::set_error_code(const char* value, size_t size) {
  
  error_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.ErrorBody.error_code)
}
inline std::string* ErrorBody::mutable_error_code() {
  
  // @@protoc_insertion_point(field_mutable:common.ErrorBody.error_code)
  return error_code_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ErrorBody::release_error_code() {
  // @@protoc_insertion_point(field_release:common.ErrorBody.error_code)
  
  return error_code_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ErrorBody::set_allocated_error_code(std::string* error_code) {
  if (error_code != nullptr) {
    
  } else {
    
  }
  error_code_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), error_code);
  // @@protoc_insertion_point(field_set_allocated:common.ErrorBody.error_code)
}

// string error_msg = 2;
inline void ErrorBody::clear_error_msg() {
  error_msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ErrorBody::error_msg() const {
  // @@protoc_insertion_point(field_get:common.ErrorBody.error_msg)
  return error_msg_.GetNoArena();
}
inline void ErrorBody::set_error_msg(const std::string& value) {
  
  error_msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.ErrorBody.error_msg)
}
inline void ErrorBody::set_error_msg(std::string&& value) {
  
  error_msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.ErrorBody.error_msg)
}
inline void ErrorBody::set_error_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  error_msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.ErrorBody.error_msg)
}
inline void ErrorBody::set_error_msg(const char* value, size_t size) {
  
  error_msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.ErrorBody.error_msg)
}
inline std::string* ErrorBody::mutable_error_msg() {
  
  // @@protoc_insertion_point(field_mutable:common.ErrorBody.error_msg)
  return error_msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ErrorBody::release_error_msg() {
  // @@protoc_insertion_point(field_release:common.ErrorBody.error_msg)
  
  return error_msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ErrorBody::set_allocated_error_msg(std::string* error_msg) {
  if (error_msg != nullptr) {
    
  } else {
    
  }
  error_msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), error_msg);
  // @@protoc_insertion_point(field_set_allocated:common.ErrorBody.error_msg)
}

// -------------------------------------------------------------------

// Reply

// .common.Header header = 1;
inline bool Reply::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::common::Header& Reply::header() const {
  const ::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:common.Reply.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::Header*>(
      &::common::_Header_default_instance_);
}
inline ::common::Header* Reply::release_header() {
  // @@protoc_insertion_point(field_release:common.Reply.header)
  
  ::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::common::Header* Reply::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.Reply.header)
  return header_;
}
inline void Reply::set_allocated_header(::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:common.Reply.header)
}

// sint32 status_code = 2;
inline void Reply::clear_status_code() {
  status_code_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Reply::status_code() const {
  // @@protoc_insertion_point(field_get:common.Reply.status_code)
  return status_code_;
}
inline void Reply::set_status_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  status_code_ = value;
  // @@protoc_insertion_point(field_set:common.Reply.status_code)
}

// string flag_id = 3;
inline void Reply::clear_flag_id() {
  flag_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Reply::flag_id() const {
  // @@protoc_insertion_point(field_get:common.Reply.flag_id)
  return flag_id_.GetNoArena();
}
inline void Reply::set_flag_id(const std::string& value) {
  
  flag_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.Reply.flag_id)
}
inline void Reply::set_flag_id(std::string&& value) {
  
  flag_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.Reply.flag_id)
}
inline void Reply::set_flag_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  flag_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.Reply.flag_id)
}
inline void Reply::set_flag_id(const char* value, size_t size) {
  
  flag_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.Reply.flag_id)
}
inline std::string* Reply::mutable_flag_id() {
  
  // @@protoc_insertion_point(field_mutable:common.Reply.flag_id)
  return flag_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Reply::release_flag_id() {
  // @@protoc_insertion_point(field_release:common.Reply.flag_id)
  
  return flag_id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Reply::set_allocated_flag_id(std::string* flag_id) {
  if (flag_id != nullptr) {
    
  } else {
    
  }
  flag_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), flag_id);
  // @@protoc_insertion_point(field_set_allocated:common.Reply.flag_id)
}

// .common.ErrorBody error_body = 4;
inline bool Reply::has_error_body() const {
  return this != internal_default_instance() && error_body_ != nullptr;
}
inline void Reply::clear_error_body() {
  if (GetArenaNoVirtual() == nullptr && error_body_ != nullptr) {
    delete error_body_;
  }
  error_body_ = nullptr;
}
inline const ::common::ErrorBody& Reply::error_body() const {
  const ::common::ErrorBody* p = error_body_;
  // @@protoc_insertion_point(field_get:common.Reply.error_body)
  return p != nullptr ? *p : *reinterpret_cast<const ::common::ErrorBody*>(
      &::common::_ErrorBody_default_instance_);
}
inline ::common::ErrorBody* Reply::release_error_body() {
  // @@protoc_insertion_point(field_release:common.Reply.error_body)
  
  ::common::ErrorBody* temp = error_body_;
  error_body_ = nullptr;
  return temp;
}
inline ::common::ErrorBody* Reply::mutable_error_body() {
  
  if (error_body_ == nullptr) {
    auto* p = CreateMaybeMessage<::common::ErrorBody>(GetArenaNoVirtual());
    error_body_ = p;
  }
  // @@protoc_insertion_point(field_mutable:common.Reply.error_body)
  return error_body_;
}
inline void Reply::set_allocated_error_body(::common::ErrorBody* error_body) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete error_body_;
  }
  if (error_body) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      error_body = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, error_body, submessage_arena);
    }
    
  } else {
    
  }
  error_body_ = error_body;
  // @@protoc_insertion_point(field_set_allocated:common.Reply.error_body)
}

// string reply_msg_name = 5;
inline void Reply::clear_reply_msg_name() {
  reply_msg_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Reply::reply_msg_name() const {
  // @@protoc_insertion_point(field_get:common.Reply.reply_msg_name)
  return reply_msg_name_.GetNoArena();
}
inline void Reply::set_reply_msg_name(const std::string& value) {
  
  reply_msg_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:common.Reply.reply_msg_name)
}
inline void Reply::set_reply_msg_name(std::string&& value) {
  
  reply_msg_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:common.Reply.reply_msg_name)
}
inline void Reply::set_reply_msg_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  reply_msg_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:common.Reply.reply_msg_name)
}
inline void Reply::set_reply_msg_name(const char* value, size_t size) {
  
  reply_msg_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:common.Reply.reply_msg_name)
}
inline std::string* Reply::mutable_reply_msg_name() {
  
  // @@protoc_insertion_point(field_mutable:common.Reply.reply_msg_name)
  return reply_msg_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Reply::release_reply_msg_name() {
  // @@protoc_insertion_point(field_release:common.Reply.reply_msg_name)
  
  return reply_msg_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Reply::set_allocated_reply_msg_name(std::string* reply_msg_name) {
  if (reply_msg_name != nullptr) {
    
  } else {
    
  }
  reply_msg_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), reply_msg_name);
  // @@protoc_insertion_point(field_set_allocated:common.Reply.reply_msg_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2freply_2eproto
