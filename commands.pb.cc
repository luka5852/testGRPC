// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: commands.proto

#include "commands.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace grpcdemo {
PROTOBUF_CONSTEXPR CommandRequest::CommandRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.command_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.parameter_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommandRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommandRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommandRequestDefaultTypeInternal() {}
  union {
    CommandRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommandRequestDefaultTypeInternal _CommandRequest_default_instance_;
PROTOBUF_CONSTEXPR CommandResponse::CommandResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.result_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommandResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommandResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommandResponseDefaultTypeInternal() {}
  union {
    CommandResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommandResponseDefaultTypeInternal _CommandResponse_default_instance_;
}  // namespace grpcdemo
static ::_pb::Metadata file_level_metadata_commands_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_commands_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_commands_2eproto = nullptr;

const uint32_t TableStruct_commands_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcdemo::CommandRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcdemo::CommandRequest, _impl_.command_),
  PROTOBUF_FIELD_OFFSET(::grpcdemo::CommandRequest, _impl_.parameter_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcdemo::CommandResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcdemo::CommandResponse, _impl_.result_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpcdemo::CommandRequest)},
  { 8, -1, -1, sizeof(::grpcdemo::CommandResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::grpcdemo::_CommandRequest_default_instance_._instance,
  &::grpcdemo::_CommandResponse_default_instance_._instance,
};

const char descriptor_table_protodef_commands_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016commands.proto\022\010grpcdemo\"4\n\016CommandReq"
  "uest\022\017\n\007command\030\001 \001(\t\022\021\n\tparameter\030\002 \001(\t"
  "\"!\n\017CommandResponse\022\016\n\006result\030\001 \001(\t2W\n\016C"
  "ommandService\022E\n\016ExecuteCommand\022\030.grpcde"
  "mo.CommandRequest\032\031.grpcdemo.CommandResp"
  "onseb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_commands_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_commands_2eproto = {
    false, false, 212, descriptor_table_protodef_commands_2eproto,
    "commands.proto",
    &descriptor_table_commands_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_commands_2eproto::offsets,
    file_level_metadata_commands_2eproto, file_level_enum_descriptors_commands_2eproto,
    file_level_service_descriptors_commands_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_commands_2eproto_getter() {
  return &descriptor_table_commands_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_commands_2eproto(&descriptor_table_commands_2eproto);
namespace grpcdemo {

// ===================================================================

class CommandRequest::_Internal {
 public:
};

CommandRequest::CommandRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grpcdemo.CommandRequest)
}
CommandRequest::CommandRequest(const CommandRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommandRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.command_){}
    , decltype(_impl_.parameter_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.command_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.command_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_command().empty()) {
    _this->_impl_.command_.Set(from._internal_command(), 
      _this->GetArenaForAllocation());
  }
  _impl_.parameter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.parameter_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_parameter().empty()) {
    _this->_impl_.parameter_.Set(from._internal_parameter(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcdemo.CommandRequest)
}

inline void CommandRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.command_){}
    , decltype(_impl_.parameter_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.command_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.command_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.parameter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.parameter_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CommandRequest::~CommandRequest() {
  // @@protoc_insertion_point(destructor:grpcdemo.CommandRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommandRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.command_.Destroy();
  _impl_.parameter_.Destroy();
}

void CommandRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommandRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcdemo.CommandRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.command_.ClearToEmpty();
  _impl_.parameter_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommandRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string command = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_command();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "grpcdemo.CommandRequest.command"));
        } else
          goto handle_unusual;
        continue;
      // string parameter = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_parameter();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "grpcdemo.CommandRequest.parameter"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CommandRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcdemo.CommandRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string command = 1;
  if (!this->_internal_command().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_command().data(), static_cast<int>(this->_internal_command().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcdemo.CommandRequest.command");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_command(), target);
  }

  // string parameter = 2;
  if (!this->_internal_parameter().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_parameter().data(), static_cast<int>(this->_internal_parameter().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcdemo.CommandRequest.parameter");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_parameter(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcdemo.CommandRequest)
  return target;
}

size_t CommandRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcdemo.CommandRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string command = 1;
  if (!this->_internal_command().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_command());
  }

  // string parameter = 2;
  if (!this->_internal_parameter().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_parameter());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommandRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommandRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommandRequest::GetClassData() const { return &_class_data_; }


void CommandRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommandRequest*>(&to_msg);
  auto& from = static_cast<const CommandRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grpcdemo.CommandRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_command().empty()) {
    _this->_internal_set_command(from._internal_command());
  }
  if (!from._internal_parameter().empty()) {
    _this->_internal_set_parameter(from._internal_parameter());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommandRequest::CopyFrom(const CommandRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcdemo.CommandRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommandRequest::IsInitialized() const {
  return true;
}

void CommandRequest::InternalSwap(CommandRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.command_, lhs_arena,
      &other->_impl_.command_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.parameter_, lhs_arena,
      &other->_impl_.parameter_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CommandRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_commands_2eproto_getter, &descriptor_table_commands_2eproto_once,
      file_level_metadata_commands_2eproto[0]);
}

// ===================================================================

class CommandResponse::_Internal {
 public:
};

CommandResponse::CommandResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grpcdemo.CommandResponse)
}
CommandResponse::CommandResponse(const CommandResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommandResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_result().empty()) {
    _this->_impl_.result_.Set(from._internal_result(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcdemo.CommandResponse)
}

inline void CommandResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CommandResponse::~CommandResponse() {
  // @@protoc_insertion_point(destructor:grpcdemo.CommandResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommandResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.result_.Destroy();
}

void CommandResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommandResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcdemo.CommandResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommandResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_result();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "grpcdemo.CommandResponse.result"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CommandResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcdemo.CommandResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_result().data(), static_cast<int>(this->_internal_result().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcdemo.CommandResponse.result");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcdemo.CommandResponse)
  return target;
}

size_t CommandResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcdemo.CommandResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommandResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommandResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommandResponse::GetClassData() const { return &_class_data_; }


void CommandResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommandResponse*>(&to_msg);
  auto& from = static_cast<const CommandResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grpcdemo.CommandResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_result().empty()) {
    _this->_internal_set_result(from._internal_result());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommandResponse::CopyFrom(const CommandResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcdemo.CommandResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommandResponse::IsInitialized() const {
  return true;
}

void CommandResponse::InternalSwap(CommandResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.result_, lhs_arena,
      &other->_impl_.result_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CommandResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_commands_2eproto_getter, &descriptor_table_commands_2eproto_once,
      file_level_metadata_commands_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcdemo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcdemo::CommandRequest*
Arena::CreateMaybeMessage< ::grpcdemo::CommandRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcdemo::CommandRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcdemo::CommandResponse*
Arena::CreateMaybeMessage< ::grpcdemo::CommandResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcdemo::CommandResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
