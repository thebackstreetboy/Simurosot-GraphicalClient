// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_parsian_simurosot_data_wrapper.proto

#ifndef PROTOBUF_INCLUDED_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto
#define PROTOBUF_INCLUDED_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "messages_parsian_simurosot_worldmodel.pb.h"
#include "messages_parsian_simurosot_debugs.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto 

namespace protobuf_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto
class DataWrapper;
class DataWrapperDefaultTypeInternal;
extern DataWrapperDefaultTypeInternal _DataWrapper_default_instance_;
namespace google {
namespace protobuf {
template<> ::DataWrapper* Arena::CreateMaybeMessage<::DataWrapper>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class DataWrapper : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DataWrapper) */ {
 public:
  DataWrapper();
  virtual ~DataWrapper();

  DataWrapper(const DataWrapper& from);

  inline DataWrapper& operator=(const DataWrapper& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DataWrapper(DataWrapper&& from) noexcept
    : DataWrapper() {
    *this = ::std::move(from);
  }

  inline DataWrapper& operator=(DataWrapper&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DataWrapper& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DataWrapper* internal_default_instance() {
    return reinterpret_cast<const DataWrapper*>(
               &_DataWrapper_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DataWrapper* other);
  friend void swap(DataWrapper& a, DataWrapper& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DataWrapper* New() const final {
    return CreateMaybeMessage<DataWrapper>(NULL);
  }

  DataWrapper* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DataWrapper>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DataWrapper& from);
  void MergeFrom(const DataWrapper& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataWrapper* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Draws draws = 2;
  bool has_draws() const;
  void clear_draws();
  static const int kDrawsFieldNumber = 2;
  private:
  const ::Draws& _internal_draws() const;
  public:
  const ::Draws& draws() const;
  ::Draws* release_draws();
  ::Draws* mutable_draws();
  void set_allocated_draws(::Draws* draws);

  // .WorldModel worldmodel = 3;
  bool has_worldmodel() const;
  void clear_worldmodel();
  static const int kWorldmodelFieldNumber = 3;
  private:
  const ::WorldModel& _internal_worldmodel() const;
  public:
  const ::WorldModel& worldmodel() const;
  ::WorldModel* release_worldmodel();
  ::WorldModel* mutable_worldmodel();
  void set_allocated_worldmodel(::WorldModel* worldmodel);

  // uint32 seq = 1;
  void clear_seq();
  static const int kSeqFieldNumber = 1;
  ::google::protobuf::uint32 seq() const;
  void set_seq(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:DataWrapper)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Draws* draws_;
  ::WorldModel* worldmodel_;
  ::google::protobuf::uint32 seq_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DataWrapper

// uint32 seq = 1;
inline void DataWrapper::clear_seq() {
  seq_ = 0u;
}
inline ::google::protobuf::uint32 DataWrapper::seq() const {
  // @@protoc_insertion_point(field_get:DataWrapper.seq)
  return seq_;
}
inline void DataWrapper::set_seq(::google::protobuf::uint32 value) {
  
  seq_ = value;
  // @@protoc_insertion_point(field_set:DataWrapper.seq)
}

// .Draws draws = 2;
inline bool DataWrapper::has_draws() const {
  return this != internal_default_instance() && draws_ != NULL;
}
inline const ::Draws& DataWrapper::_internal_draws() const {
  return *draws_;
}
inline const ::Draws& DataWrapper::draws() const {
  const ::Draws* p = draws_;
  // @@protoc_insertion_point(field_get:DataWrapper.draws)
  return p != NULL ? *p : *reinterpret_cast<const ::Draws*>(
      &::_Draws_default_instance_);
}
inline ::Draws* DataWrapper::release_draws() {
  // @@protoc_insertion_point(field_release:DataWrapper.draws)
  
  ::Draws* temp = draws_;
  draws_ = NULL;
  return temp;
}
inline ::Draws* DataWrapper::mutable_draws() {
  
  if (draws_ == NULL) {
    auto* p = CreateMaybeMessage<::Draws>(GetArenaNoVirtual());
    draws_ = p;
  }
  // @@protoc_insertion_point(field_mutable:DataWrapper.draws)
  return draws_;
}
inline void DataWrapper::set_allocated_draws(::Draws* draws) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(draws_);
  }
  if (draws) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      draws = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, draws, submessage_arena);
    }
    
  } else {
    
  }
  draws_ = draws;
  // @@protoc_insertion_point(field_set_allocated:DataWrapper.draws)
}

// .WorldModel worldmodel = 3;
inline bool DataWrapper::has_worldmodel() const {
  return this != internal_default_instance() && worldmodel_ != NULL;
}
inline const ::WorldModel& DataWrapper::_internal_worldmodel() const {
  return *worldmodel_;
}
inline const ::WorldModel& DataWrapper::worldmodel() const {
  const ::WorldModel* p = worldmodel_;
  // @@protoc_insertion_point(field_get:DataWrapper.worldmodel)
  return p != NULL ? *p : *reinterpret_cast<const ::WorldModel*>(
      &::_WorldModel_default_instance_);
}
inline ::WorldModel* DataWrapper::release_worldmodel() {
  // @@protoc_insertion_point(field_release:DataWrapper.worldmodel)
  
  ::WorldModel* temp = worldmodel_;
  worldmodel_ = NULL;
  return temp;
}
inline ::WorldModel* DataWrapper::mutable_worldmodel() {
  
  if (worldmodel_ == NULL) {
    auto* p = CreateMaybeMessage<::WorldModel>(GetArenaNoVirtual());
    worldmodel_ = p;
  }
  // @@protoc_insertion_point(field_mutable:DataWrapper.worldmodel)
  return worldmodel_;
}
inline void DataWrapper::set_allocated_worldmodel(::WorldModel* worldmodel) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(worldmodel_);
  }
  if (worldmodel) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      worldmodel = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, worldmodel, submessage_arena);
    }
    
  } else {
    
  }
  worldmodel_ = worldmodel;
  // @@protoc_insertion_point(field_set_allocated:DataWrapper.worldmodel)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto
