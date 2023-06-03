// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/reply.proto

#include "./reply.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_common_2freply_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ErrorBody_common_2freply_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_common_2fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_common_2fheader_2eproto;
namespace common {
class ErrorBodyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ErrorBody> _instance;
} _ErrorBody_default_instance_;
class ReplyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Reply> _instance;
} _Reply_default_instance_;
}  // namespace common
static void InitDefaultsscc_info_ErrorBody_common_2freply_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::common::_ErrorBody_default_instance_;
    new (ptr) ::common::ErrorBody();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::common::ErrorBody::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ErrorBody_common_2freply_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_ErrorBody_common_2freply_2eproto}, {}};

static void InitDefaultsscc_info_Reply_common_2freply_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::common::_Reply_default_instance_;
    new (ptr) ::common::Reply();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::common::Reply::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Reply_common_2freply_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_Reply_common_2freply_2eproto}, {
      &scc_info_Header_common_2fheader_2eproto.base,
      &scc_info_ErrorBody_common_2freply_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_common_2freply_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_common_2freply_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_common_2freply_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_common_2freply_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::common::ErrorBody, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::common::ErrorBody, error_code_),
  PROTOBUF_FIELD_OFFSET(::common::ErrorBody, error_msg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::common::Reply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::common::Reply, header_),
  PROTOBUF_FIELD_OFFSET(::common::Reply, status_code_),
  PROTOBUF_FIELD_OFFSET(::common::Reply, flag_id_),
  PROTOBUF_FIELD_OFFSET(::common::Reply, error_body_),
  PROTOBUF_FIELD_OFFSET(::common::Reply, reply_msg_name_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::common::ErrorBody)},
  { 7, -1, sizeof(::common::Reply)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::common::_ErrorBody_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::common::_Reply_default_instance_),
};

const char descriptor_table_protodef_common_2freply_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022common/reply.proto\022\006common\032\023common/hea"
  "der.proto\"2\n\tErrorBody\022\022\n\nerror_code\030\001 \001"
  "(\t\022\021\n\terror_msg\030\002 \001(\t\"\214\001\n\005Reply\022\036\n\006heade"
  "r\030\001 \001(\0132\016.common.Header\022\023\n\013status_code\030\002"
  " \001(\021\022\017\n\007flag_id\030\003 \001(\t\022%\n\nerror_body\030\004 \001("
  "\0132\021.common.ErrorBody\022\026\n\016reply_msg_name\030\005"
  " \001(\tB\tZ\007/commonb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_common_2freply_2eproto_deps[1] = {
  &::descriptor_table_common_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_common_2freply_2eproto_sccs[2] = {
  &scc_info_ErrorBody_common_2freply_2eproto.base,
  &scc_info_Reply_common_2freply_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_common_2freply_2eproto_once;
static bool descriptor_table_common_2freply_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2freply_2eproto = {
  &descriptor_table_common_2freply_2eproto_initialized, descriptor_table_protodef_common_2freply_2eproto, "common/reply.proto", 263,
  &descriptor_table_common_2freply_2eproto_once, descriptor_table_common_2freply_2eproto_sccs, descriptor_table_common_2freply_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_common_2freply_2eproto::offsets,
  file_level_metadata_common_2freply_2eproto, 2, file_level_enum_descriptors_common_2freply_2eproto, file_level_service_descriptors_common_2freply_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_common_2freply_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_common_2freply_2eproto), true);
namespace common {

// ===================================================================

void ErrorBody::InitAsDefaultInstance() {
}
class ErrorBody::_Internal {
 public:
};

ErrorBody::ErrorBody()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.ErrorBody)
}
ErrorBody::ErrorBody(const ErrorBody& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  error_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.error_code().empty()) {
    error_code_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.error_code_);
  }
  error_msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.error_msg().empty()) {
    error_msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.error_msg_);
  }
  // @@protoc_insertion_point(copy_constructor:common.ErrorBody)
}

void ErrorBody::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ErrorBody_common_2freply_2eproto.base);
  error_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ErrorBody::~ErrorBody() {
  // @@protoc_insertion_point(destructor:common.ErrorBody)
  SharedDtor();
}

void ErrorBody::SharedDtor() {
  error_code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ErrorBody::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ErrorBody& ErrorBody::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ErrorBody_common_2freply_2eproto.base);
  return *internal_default_instance();
}


void ErrorBody::Clear() {
// @@protoc_insertion_point(message_clear_start:common.ErrorBody)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  error_code_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ErrorBody::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string error_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_error_code(), ptr, ctx, "common.ErrorBody.error_code");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string error_msg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_error_msg(), ptr, ctx, "common.ErrorBody.error_msg");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ErrorBody::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:common.ErrorBody)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string error_code = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_error_code()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->error_code().data(), static_cast<int>(this->error_code().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "common.ErrorBody.error_code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string error_msg = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_error_msg()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->error_msg().data(), static_cast<int>(this->error_msg().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "common.ErrorBody.error_msg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:common.ErrorBody)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:common.ErrorBody)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ErrorBody::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:common.ErrorBody)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string error_code = 1;
  if (this->error_code().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->error_code().data(), static_cast<int>(this->error_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.ErrorBody.error_code");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->error_code(), output);
  }

  // string error_msg = 2;
  if (this->error_msg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->error_msg().data(), static_cast<int>(this->error_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.ErrorBody.error_msg");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->error_msg(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:common.ErrorBody)
}

::PROTOBUF_NAMESPACE_ID::uint8* ErrorBody::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:common.ErrorBody)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string error_code = 1;
  if (this->error_code().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->error_code().data(), static_cast<int>(this->error_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.ErrorBody.error_code");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->error_code(), target);
  }

  // string error_msg = 2;
  if (this->error_msg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->error_msg().data(), static_cast<int>(this->error_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.ErrorBody.error_msg");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        2, this->error_msg(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:common.ErrorBody)
  return target;
}

size_t ErrorBody::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:common.ErrorBody)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string error_code = 1;
  if (this->error_code().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->error_code());
  }

  // string error_msg = 2;
  if (this->error_msg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->error_msg());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ErrorBody::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:common.ErrorBody)
  GOOGLE_DCHECK_NE(&from, this);
  const ErrorBody* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ErrorBody>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:common.ErrorBody)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:common.ErrorBody)
    MergeFrom(*source);
  }
}

void ErrorBody::MergeFrom(const ErrorBody& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:common.ErrorBody)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.error_code().size() > 0) {

    error_code_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.error_code_);
  }
  if (from.error_msg().size() > 0) {

    error_msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.error_msg_);
  }
}

void ErrorBody::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:common.ErrorBody)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ErrorBody::CopyFrom(const ErrorBody& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:common.ErrorBody)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ErrorBody::IsInitialized() const {
  return true;
}

void ErrorBody::InternalSwap(ErrorBody* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  error_code_.Swap(&other->error_code_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  error_msg_.Swap(&other->error_msg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata ErrorBody::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Reply::InitAsDefaultInstance() {
  ::common::_Reply_default_instance_._instance.get_mutable()->header_ = const_cast< ::common::Header*>(
      ::common::Header::internal_default_instance());
  ::common::_Reply_default_instance_._instance.get_mutable()->error_body_ = const_cast< ::common::ErrorBody*>(
      ::common::ErrorBody::internal_default_instance());
}
class Reply::_Internal {
 public:
  static const ::common::Header& header(const Reply* msg);
  static const ::common::ErrorBody& error_body(const Reply* msg);
};

const ::common::Header&
Reply::_Internal::header(const Reply* msg) {
  return *msg->header_;
}
const ::common::ErrorBody&
Reply::_Internal::error_body(const Reply* msg) {
  return *msg->error_body_;
}
void Reply::clear_header() {
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
Reply::Reply()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.Reply)
}
Reply::Reply(const Reply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  flag_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.flag_id().empty()) {
    flag_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.flag_id_);
  }
  reply_msg_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.reply_msg_name().empty()) {
    reply_msg_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.reply_msg_name_);
  }
  if (from.has_header()) {
    header_ = new ::common::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from.has_error_body()) {
    error_body_ = new ::common::ErrorBody(*from.error_body_);
  } else {
    error_body_ = nullptr;
  }
  status_code_ = from.status_code_;
  // @@protoc_insertion_point(copy_constructor:common.Reply)
}

void Reply::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Reply_common_2freply_2eproto.base);
  flag_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  reply_msg_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&status_code_) -
      reinterpret_cast<char*>(&header_)) + sizeof(status_code_));
}

Reply::~Reply() {
  // @@protoc_insertion_point(destructor:common.Reply)
  SharedDtor();
}

void Reply::SharedDtor() {
  flag_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  reply_msg_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete error_body_;
}

void Reply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Reply& Reply::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Reply_common_2freply_2eproto.base);
  return *internal_default_instance();
}


void Reply::Clear() {
// @@protoc_insertion_point(message_clear_start:common.Reply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  flag_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  reply_msg_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && error_body_ != nullptr) {
    delete error_body_;
  }
  error_body_ = nullptr;
  status_code_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Reply::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .common.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 status_code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          status_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string flag_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_flag_id(), ptr, ctx, "common.Reply.flag_id");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .common.ErrorBody error_body = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(mutable_error_body(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string reply_msg_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_reply_msg_name(), ptr, ctx, "common.Reply.reply_msg_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Reply::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:common.Reply)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .common.Header header = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // sint32 status_code = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_SINT32>(
                 input, &status_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string flag_id = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_flag_id()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->flag_id().data(), static_cast<int>(this->flag_id().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "common.Reply.flag_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.ErrorBody error_body = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_error_body()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string reply_msg_name = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_reply_msg_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->reply_msg_name().data(), static_cast<int>(this->reply_msg_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "common.Reply.reply_msg_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:common.Reply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:common.Reply)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Reply::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:common.Reply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .common.Header header = 1;
  if (this->has_header()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::header(this), output);
  }

  // sint32 status_code = 2;
  if (this->status_code() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32(2, this->status_code(), output);
  }

  // string flag_id = 3;
  if (this->flag_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->flag_id().data(), static_cast<int>(this->flag_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Reply.flag_id");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->flag_id(), output);
  }

  // .common.ErrorBody error_body = 4;
  if (this->has_error_body()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, _Internal::error_body(this), output);
  }

  // string reply_msg_name = 5;
  if (this->reply_msg_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->reply_msg_name().data(), static_cast<int>(this->reply_msg_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Reply.reply_msg_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->reply_msg_name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:common.Reply)
}

::PROTOBUF_NAMESPACE_ID::uint8* Reply::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:common.Reply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .common.Header header = 1;
  if (this->has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::header(this), target);
  }

  // sint32 status_code = 2;
  if (this->status_code() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(2, this->status_code(), target);
  }

  // string flag_id = 3;
  if (this->flag_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->flag_id().data(), static_cast<int>(this->flag_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Reply.flag_id");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->flag_id(), target);
  }

  // .common.ErrorBody error_body = 4;
  if (this->has_error_body()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, _Internal::error_body(this), target);
  }

  // string reply_msg_name = 5;
  if (this->reply_msg_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->reply_msg_name().data(), static_cast<int>(this->reply_msg_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Reply.reply_msg_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        5, this->reply_msg_name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:common.Reply)
  return target;
}

size_t Reply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:common.Reply)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string flag_id = 3;
  if (this->flag_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->flag_id());
  }

  // string reply_msg_name = 5;
  if (this->reply_msg_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->reply_msg_name());
  }

  // .common.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .common.ErrorBody error_body = 4;
  if (this->has_error_body()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *error_body_);
  }

  // sint32 status_code = 2;
  if (this->status_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->status_code());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Reply::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:common.Reply)
  GOOGLE_DCHECK_NE(&from, this);
  const Reply* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Reply>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:common.Reply)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:common.Reply)
    MergeFrom(*source);
  }
}

void Reply::MergeFrom(const Reply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:common.Reply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.flag_id().size() > 0) {

    flag_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.flag_id_);
  }
  if (from.reply_msg_name().size() > 0) {

    reply_msg_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.reply_msg_name_);
  }
  if (from.has_header()) {
    mutable_header()->::common::Header::MergeFrom(from.header());
  }
  if (from.has_error_body()) {
    mutable_error_body()->::common::ErrorBody::MergeFrom(from.error_body());
  }
  if (from.status_code() != 0) {
    set_status_code(from.status_code());
  }
}

void Reply::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:common.Reply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Reply::CopyFrom(const Reply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:common.Reply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Reply::IsInitialized() const {
  return true;
}

void Reply::InternalSwap(Reply* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  flag_id_.Swap(&other->flag_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  reply_msg_name_.Swap(&other->reply_msg_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(error_body_, other->error_body_);
  swap(status_code_, other->status_code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Reply::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::common::ErrorBody* Arena::CreateMaybeMessage< ::common::ErrorBody >(Arena* arena) {
  return Arena::CreateInternal< ::common::ErrorBody >(arena);
}
template<> PROTOBUF_NOINLINE ::common::Reply* Arena::CreateMaybeMessage< ::common::Reply >(Arena* arena) {
  return Arena::CreateInternal< ::common::Reply >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
