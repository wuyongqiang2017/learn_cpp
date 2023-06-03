// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/align.proto

#include "./align.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_common_2fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_common_2fheader_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace common {
class AlignDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Align> _instance;
} _Align_default_instance_;
}  // namespace common
static void InitDefaultsscc_info_Align_common_2falign_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::common::_Align_default_instance_;
    new (ptr) ::common::Align();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::common::Align::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Align_common_2falign_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_Align_common_2falign_2eproto}, {
      &scc_info_Header_common_2fheader_2eproto.base,
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_common_2falign_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_common_2falign_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_common_2falign_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_common_2falign_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::common::Align, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::common::Align, header_),
  PROTOBUF_FIELD_OFFSET(::common::Align, created_),
  PROTOBUF_FIELD_OFFSET(::common::Align, task_id_),
  PROTOBUF_FIELD_OFFSET(::common::Align, crane_id_),
  PROTOBUF_FIELD_OFFSET(::common::Align, offset_),
  PROTOBUF_FIELD_OFFSET(::common::Align, inposition_type_),
  PROTOBUF_FIELD_OFFSET(::common::Align, cps_offset_),
  PROTOBUF_FIELD_OFFSET(::common::Align, dest_type_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::common::Align)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::common::_Align_default_instance_),
};

const char descriptor_table_protodef_common_2falign_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022common/align.proto\022\006common\032\022common/enu"
  "ms.proto\032\023common/header.proto\032\037google/pr"
  "otobuf/timestamp.proto\"\361\001\n\005Align\022\036\n\006head"
  "er\030\001 \001(\0132\016.common.Header\022+\n\007created\030\002 \001("
  "\0132\032.google.protobuf.Timestamp\022\017\n\007task_id"
  "\030\003 \001(\t\022\020\n\010crane_id\030\004 \001(\t\022\016\n\006offset\030\005 \001(\002"
  "\022/\n\017inposition_type\030\006 \001(\0162\026.common.Inpos"
  "itionType\022\022\n\ncps_offset\030\007 \001(\002\022#\n\tdest_ty"
  "pe\030\010 \001(\0162\020.common.DestTypeB\tZ\007/commonb\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_common_2falign_2eproto_deps[3] = {
  &::descriptor_table_common_2fenums_2eproto,
  &::descriptor_table_common_2fheader_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_common_2falign_2eproto_sccs[1] = {
  &scc_info_Align_common_2falign_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_common_2falign_2eproto_once;
static bool descriptor_table_common_2falign_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2falign_2eproto = {
  &descriptor_table_common_2falign_2eproto_initialized, descriptor_table_protodef_common_2falign_2eproto, "common/align.proto", 365,
  &descriptor_table_common_2falign_2eproto_once, descriptor_table_common_2falign_2eproto_sccs, descriptor_table_common_2falign_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_common_2falign_2eproto::offsets,
  file_level_metadata_common_2falign_2eproto, 1, file_level_enum_descriptors_common_2falign_2eproto, file_level_service_descriptors_common_2falign_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_common_2falign_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_common_2falign_2eproto), true);
namespace common {

// ===================================================================

void Align::InitAsDefaultInstance() {
  ::common::_Align_default_instance_._instance.get_mutable()->header_ = const_cast< ::common::Header*>(
      ::common::Header::internal_default_instance());
  ::common::_Align_default_instance_._instance.get_mutable()->created_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
}
class Align::_Internal {
 public:
  static const ::common::Header& header(const Align* msg);
  static const PROTOBUF_NAMESPACE_ID::Timestamp& created(const Align* msg);
};

const ::common::Header&
Align::_Internal::header(const Align* msg) {
  return *msg->header_;
}
const PROTOBUF_NAMESPACE_ID::Timestamp&
Align::_Internal::created(const Align* msg) {
  return *msg->created_;
}
void Align::clear_header() {
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
void Align::clear_created() {
  if (GetArenaNoVirtual() == nullptr && created_ != nullptr) {
    delete created_;
  }
  created_ = nullptr;
}
Align::Align()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.Align)
}
Align::Align(const Align& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  task_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.task_id().empty()) {
    task_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.task_id_);
  }
  crane_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.crane_id().empty()) {
    crane_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.crane_id_);
  }
  if (from.has_header()) {
    header_ = new ::common::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from.has_created()) {
    created_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.created_);
  } else {
    created_ = nullptr;
  }
  ::memcpy(&offset_, &from.offset_,
    static_cast<size_t>(reinterpret_cast<char*>(&dest_type_) -
    reinterpret_cast<char*>(&offset_)) + sizeof(dest_type_));
  // @@protoc_insertion_point(copy_constructor:common.Align)
}

void Align::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Align_common_2falign_2eproto.base);
  task_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  crane_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dest_type_) -
      reinterpret_cast<char*>(&header_)) + sizeof(dest_type_));
}

Align::~Align() {
  // @@protoc_insertion_point(destructor:common.Align)
  SharedDtor();
}

void Align::SharedDtor() {
  task_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  crane_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete created_;
}

void Align::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Align& Align::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Align_common_2falign_2eproto.base);
  return *internal_default_instance();
}


void Align::Clear() {
// @@protoc_insertion_point(message_clear_start:common.Align)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  task_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  crane_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && created_ != nullptr) {
    delete created_;
  }
  created_ = nullptr;
  ::memset(&offset_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dest_type_) -
      reinterpret_cast<char*>(&offset_)) + sizeof(dest_type_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Align::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // .google.protobuf.Timestamp created = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_created(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string task_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_task_id(), ptr, ctx, "common.Align.task_id");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string crane_id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_crane_id(), ptr, ctx, "common.Align.crane_id");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float offset = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          offset_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // .common.InpositionType inposition_type = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          set_inposition_type(static_cast<::common::InpositionType>(val));
        } else goto handle_unusual;
        continue;
      // float cps_offset = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61)) {
          cps_offset_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // .common.DestType dest_type = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          set_dest_type(static_cast<::common::DestType>(val));
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
bool Align::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:common.Align)
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

      // .google.protobuf.Timestamp created = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_created()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string task_id = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_task_id()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->task_id().data(), static_cast<int>(this->task_id().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "common.Align.task_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string crane_id = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_crane_id()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->crane_id().data(), static_cast<int>(this->crane_id().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "common.Align.crane_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float offset = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (45 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &offset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.InpositionType inposition_type = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (48 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_inposition_type(static_cast< ::common::InpositionType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float cps_offset = 7;
      case 7: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (61 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &cps_offset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.DestType dest_type = 8;
      case 8: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (64 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_dest_type(static_cast< ::common::DestType >(value));
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
  // @@protoc_insertion_point(parse_success:common.Align)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:common.Align)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Align::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:common.Align)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .common.Header header = 1;
  if (this->has_header()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::header(this), output);
  }

  // .google.protobuf.Timestamp created = 2;
  if (this->has_created()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, _Internal::created(this), output);
  }

  // string task_id = 3;
  if (this->task_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->task_id().data(), static_cast<int>(this->task_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Align.task_id");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->task_id(), output);
  }

  // string crane_id = 4;
  if (this->crane_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->crane_id().data(), static_cast<int>(this->crane_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Align.crane_id");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->crane_id(), output);
  }

  // float offset = 5;
  if (!(this->offset() <= 0 && this->offset() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(5, this->offset(), output);
  }

  // .common.InpositionType inposition_type = 6;
  if (this->inposition_type() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      6, this->inposition_type(), output);
  }

  // float cps_offset = 7;
  if (!(this->cps_offset() <= 0 && this->cps_offset() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloat(7, this->cps_offset(), output);
  }

  // .common.DestType dest_type = 8;
  if (this->dest_type() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      8, this->dest_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:common.Align)
}

::PROTOBUF_NAMESPACE_ID::uint8* Align::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:common.Align)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .common.Header header = 1;
  if (this->has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::header(this), target);
  }

  // .google.protobuf.Timestamp created = 2;
  if (this->has_created()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::created(this), target);
  }

  // string task_id = 3;
  if (this->task_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->task_id().data(), static_cast<int>(this->task_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Align.task_id");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->task_id(), target);
  }

  // string crane_id = 4;
  if (this->crane_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->crane_id().data(), static_cast<int>(this->crane_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "common.Align.crane_id");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->crane_id(), target);
  }

  // float offset = 5;
  if (!(this->offset() <= 0 && this->offset() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->offset(), target);
  }

  // .common.InpositionType inposition_type = 6;
  if (this->inposition_type() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      6, this->inposition_type(), target);
  }

  // float cps_offset = 7;
  if (!(this->cps_offset() <= 0 && this->cps_offset() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(7, this->cps_offset(), target);
  }

  // .common.DestType dest_type = 8;
  if (this->dest_type() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      8, this->dest_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:common.Align)
  return target;
}

size_t Align::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:common.Align)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string task_id = 3;
  if (this->task_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->task_id());
  }

  // string crane_id = 4;
  if (this->crane_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->crane_id());
  }

  // .common.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .google.protobuf.Timestamp created = 2;
  if (this->has_created()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *created_);
  }

  // float offset = 5;
  if (!(this->offset() <= 0 && this->offset() >= 0)) {
    total_size += 1 + 4;
  }

  // .common.InpositionType inposition_type = 6;
  if (this->inposition_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->inposition_type());
  }

  // float cps_offset = 7;
  if (!(this->cps_offset() <= 0 && this->cps_offset() >= 0)) {
    total_size += 1 + 4;
  }

  // .common.DestType dest_type = 8;
  if (this->dest_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->dest_type());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Align::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:common.Align)
  GOOGLE_DCHECK_NE(&from, this);
  const Align* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Align>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:common.Align)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:common.Align)
    MergeFrom(*source);
  }
}

void Align::MergeFrom(const Align& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:common.Align)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.task_id().size() > 0) {

    task_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.task_id_);
  }
  if (from.crane_id().size() > 0) {

    crane_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.crane_id_);
  }
  if (from.has_header()) {
    mutable_header()->::common::Header::MergeFrom(from.header());
  }
  if (from.has_created()) {
    mutable_created()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from.created());
  }
  if (!(from.offset() <= 0 && from.offset() >= 0)) {
    set_offset(from.offset());
  }
  if (from.inposition_type() != 0) {
    set_inposition_type(from.inposition_type());
  }
  if (!(from.cps_offset() <= 0 && from.cps_offset() >= 0)) {
    set_cps_offset(from.cps_offset());
  }
  if (from.dest_type() != 0) {
    set_dest_type(from.dest_type());
  }
}

void Align::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:common.Align)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Align::CopyFrom(const Align& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:common.Align)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Align::IsInitialized() const {
  return true;
}

void Align::InternalSwap(Align* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  task_id_.Swap(&other->task_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  crane_id_.Swap(&other->crane_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(created_, other->created_);
  swap(offset_, other->offset_);
  swap(inposition_type_, other->inposition_type_);
  swap(cps_offset_, other->cps_offset_);
  swap(dest_type_, other->dest_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Align::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::common::Align* Arena::CreateMaybeMessage< ::common::Align >(Arena* arena) {
  return Arena::CreateInternal< ::common::Align >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
