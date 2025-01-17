// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: docmsg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_docmsg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_docmsg_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_docmsg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_docmsg_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_docmsg_2eproto;
namespace protos {
class DocMsg;
struct DocMsgDefaultTypeInternal;
extern DocMsgDefaultTypeInternal _DocMsg_default_instance_;
}  // namespace protos
PROTOBUF_NAMESPACE_OPEN
template<> ::protos::DocMsg* Arena::CreateMaybeMessage<::protos::DocMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protos {

// ===================================================================

class DocMsg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protos.DocMsg) */ {
 public:
  inline DocMsg() : DocMsg(nullptr) {}
  ~DocMsg() override;
  explicit PROTOBUF_CONSTEXPR DocMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DocMsg(const DocMsg& from);
  DocMsg(DocMsg&& from) noexcept
    : DocMsg() {
    *this = ::std::move(from);
  }

  inline DocMsg& operator=(const DocMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline DocMsg& operator=(DocMsg&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const DocMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const DocMsg* internal_default_instance() {
    return reinterpret_cast<const DocMsg*>(
               &_DocMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DocMsg& a, DocMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(DocMsg* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DocMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DocMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DocMsg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DocMsg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DocMsg& from) {
    DocMsg::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DocMsg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protos.DocMsg";
  }
  protected:
  explicit DocMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGetProtosFieldNumber = 1,
  };
  // bool getProtos = 1;
  void clear_getprotos();
  bool getprotos() const;
  void set_getprotos(bool value);
  private:
  bool _internal_getprotos() const;
  void _internal_set_getprotos(bool value);
  public:

  // @@protoc_insertion_point(class_scope:protos.DocMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    bool getprotos_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_docmsg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DocMsg

// bool getProtos = 1;
inline void DocMsg::clear_getprotos() {
  _impl_.getprotos_ = false;
}
inline bool DocMsg::_internal_getprotos() const {
  return _impl_.getprotos_;
}
inline bool DocMsg::getprotos() const {
  // @@protoc_insertion_point(field_get:protos.DocMsg.getProtos)
  return _internal_getprotos();
}
inline void DocMsg::_internal_set_getprotos(bool value) {
  
  _impl_.getprotos_ = value;
}
inline void DocMsg::set_getprotos(bool value) {
  _internal_set_getprotos(value);
  // @@protoc_insertion_point(field_set:protos.DocMsg.getProtos)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_docmsg_2eproto
