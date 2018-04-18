// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nodecom.proto

#ifndef PROTOBUF_nodecom_2eproto__INCLUDED
#define PROTOBUF_nodecom_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_nodecom_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSubmitNonceReplyImpl();
void InitDefaultsSubmitNonceReply();
void InitDefaultsSubmitNonceRequestImpl();
void InitDefaultsSubmitNonceRequest();
inline void InitDefaults() {
  InitDefaultsSubmitNonceReply();
  InitDefaultsSubmitNonceRequest();
}
}  // namespace protobuf_nodecom_2eproto
namespace nodecom {
class SubmitNonceReply;
class SubmitNonceReplyDefaultTypeInternal;
extern SubmitNonceReplyDefaultTypeInternal _SubmitNonceReply_default_instance_;
class SubmitNonceRequest;
class SubmitNonceRequestDefaultTypeInternal;
extern SubmitNonceRequestDefaultTypeInternal _SubmitNonceRequest_default_instance_;
}  // namespace nodecom
namespace nodecom {

// ===================================================================

class SubmitNonceReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:nodecom.SubmitNonceReply) */ {
 public:
  SubmitNonceReply();
  virtual ~SubmitNonceReply();

  SubmitNonceReply(const SubmitNonceReply& from);

  inline SubmitNonceReply& operator=(const SubmitNonceReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SubmitNonceReply(SubmitNonceReply&& from) noexcept
    : SubmitNonceReply() {
    *this = ::std::move(from);
  }

  inline SubmitNonceReply& operator=(SubmitNonceReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SubmitNonceReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SubmitNonceReply* internal_default_instance() {
    return reinterpret_cast<const SubmitNonceReply*>(
               &_SubmitNonceReply_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SubmitNonceReply* other);
  friend void swap(SubmitNonceReply& a, SubmitNonceReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SubmitNonceReply* New() const PROTOBUF_FINAL { return New(NULL); }

  SubmitNonceReply* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SubmitNonceReply& from);
  void MergeFrom(const SubmitNonceReply& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SubmitNonceReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:nodecom.SubmitNonceReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct ::protobuf_nodecom_2eproto::TableStruct;
  friend void ::protobuf_nodecom_2eproto::InitDefaultsSubmitNonceReplyImpl();
};
// -------------------------------------------------------------------

class SubmitNonceRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:nodecom.SubmitNonceRequest) */ {
 public:
  SubmitNonceRequest();
  virtual ~SubmitNonceRequest();

  SubmitNonceRequest(const SubmitNonceRequest& from);

  inline SubmitNonceRequest& operator=(const SubmitNonceRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SubmitNonceRequest(SubmitNonceRequest&& from) noexcept
    : SubmitNonceRequest() {
    *this = ::std::move(from);
  }

  inline SubmitNonceRequest& operator=(SubmitNonceRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SubmitNonceRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SubmitNonceRequest* internal_default_instance() {
    return reinterpret_cast<const SubmitNonceRequest*>(
               &_SubmitNonceRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SubmitNonceRequest* other);
  friend void swap(SubmitNonceRequest& a, SubmitNonceRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SubmitNonceRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  SubmitNonceRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SubmitNonceRequest& from);
  void MergeFrom(const SubmitNonceRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SubmitNonceRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string secret = 5;
  void clear_secret();
  static const int kSecretFieldNumber = 5;
  const ::std::string& secret() const;
  void set_secret(const ::std::string& value);
  #if LANG_CXX11
  void set_secret(::std::string&& value);
  #endif
  void set_secret(const char* value);
  void set_secret(const char* value, size_t size);
  ::std::string* mutable_secret();
  ::std::string* release_secret();
  void set_allocated_secret(::std::string* secret);

  // uint64 accountID = 1;
  void clear_accountid();
  static const int kAccountIDFieldNumber = 1;
  ::google::protobuf::uint64 accountid() const;
  void set_accountid(::google::protobuf::uint64 value);

  // uint64 nonce = 2;
  void clear_nonce();
  static const int kNonceFieldNumber = 2;
  ::google::protobuf::uint64 nonce() const;
  void set_nonce(::google::protobuf::uint64 value);

  // uint64 deadline = 3;
  void clear_deadline();
  static const int kDeadlineFieldNumber = 3;
  ::google::protobuf::uint64 deadline() const;
  void set_deadline(::google::protobuf::uint64 value);

  // uint64 blockHeight = 4;
  void clear_blockheight();
  static const int kBlockHeightFieldNumber = 4;
  ::google::protobuf::uint64 blockheight() const;
  void set_blockheight(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:nodecom.SubmitNonceRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr secret_;
  ::google::protobuf::uint64 accountid_;
  ::google::protobuf::uint64 nonce_;
  ::google::protobuf::uint64 deadline_;
  ::google::protobuf::uint64 blockheight_;
  mutable int _cached_size_;
  friend struct ::protobuf_nodecom_2eproto::TableStruct;
  friend void ::protobuf_nodecom_2eproto::InitDefaultsSubmitNonceRequestImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubmitNonceReply

// -------------------------------------------------------------------

// SubmitNonceRequest

// uint64 accountID = 1;
inline void SubmitNonceRequest::clear_accountid() {
  accountid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SubmitNonceRequest::accountid() const {
  // @@protoc_insertion_point(field_get:nodecom.SubmitNonceRequest.accountID)
  return accountid_;
}
inline void SubmitNonceRequest::set_accountid(::google::protobuf::uint64 value) {
  
  accountid_ = value;
  // @@protoc_insertion_point(field_set:nodecom.SubmitNonceRequest.accountID)
}

// uint64 nonce = 2;
inline void SubmitNonceRequest::clear_nonce() {
  nonce_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SubmitNonceRequest::nonce() const {
  // @@protoc_insertion_point(field_get:nodecom.SubmitNonceRequest.nonce)
  return nonce_;
}
inline void SubmitNonceRequest::set_nonce(::google::protobuf::uint64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:nodecom.SubmitNonceRequest.nonce)
}

// uint64 deadline = 3;
inline void SubmitNonceRequest::clear_deadline() {
  deadline_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SubmitNonceRequest::deadline() const {
  // @@protoc_insertion_point(field_get:nodecom.SubmitNonceRequest.deadline)
  return deadline_;
}
inline void SubmitNonceRequest::set_deadline(::google::protobuf::uint64 value) {
  
  deadline_ = value;
  // @@protoc_insertion_point(field_set:nodecom.SubmitNonceRequest.deadline)
}

// uint64 blockHeight = 4;
inline void SubmitNonceRequest::clear_blockheight() {
  blockheight_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SubmitNonceRequest::blockheight() const {
  // @@protoc_insertion_point(field_get:nodecom.SubmitNonceRequest.blockHeight)
  return blockheight_;
}
inline void SubmitNonceRequest::set_blockheight(::google::protobuf::uint64 value) {
  
  blockheight_ = value;
  // @@protoc_insertion_point(field_set:nodecom.SubmitNonceRequest.blockHeight)
}

// string secret = 5;
inline void SubmitNonceRequest::clear_secret() {
  secret_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SubmitNonceRequest::secret() const {
  // @@protoc_insertion_point(field_get:nodecom.SubmitNonceRequest.secret)
  return secret_.GetNoArena();
}
inline void SubmitNonceRequest::set_secret(const ::std::string& value) {
  
  secret_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nodecom.SubmitNonceRequest.secret)
}
#if LANG_CXX11
inline void SubmitNonceRequest::set_secret(::std::string&& value) {
  
  secret_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:nodecom.SubmitNonceRequest.secret)
}
#endif
inline void SubmitNonceRequest::set_secret(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  secret_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nodecom.SubmitNonceRequest.secret)
}
inline void SubmitNonceRequest::set_secret(const char* value, size_t size) {
  
  secret_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nodecom.SubmitNonceRequest.secret)
}
inline ::std::string* SubmitNonceRequest::mutable_secret() {
  
  // @@protoc_insertion_point(field_mutable:nodecom.SubmitNonceRequest.secret)
  return secret_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SubmitNonceRequest::release_secret() {
  // @@protoc_insertion_point(field_release:nodecom.SubmitNonceRequest.secret)
  
  return secret_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SubmitNonceRequest::set_allocated_secret(::std::string* secret) {
  if (secret != NULL) {
    
  } else {
    
  }
  secret_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), secret);
  // @@protoc_insertion_point(field_set_allocated:nodecom.SubmitNonceRequest.secret)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace nodecom

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_nodecom_2eproto__INCLUDED