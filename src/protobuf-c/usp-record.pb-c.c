/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: usp-record.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "usp-record.pb-c.h"
void   usp_record__record__init
                     (UspRecord__Record         *message)
{
  static const UspRecord__Record init_value = USP_RECORD__RECORD__INIT;
  *message = init_value;
}
size_t usp_record__record__get_packed_size
                     (const UspRecord__Record *message)
{
  assert(message->base.descriptor == &usp_record__record__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t usp_record__record__pack
                     (const UspRecord__Record *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &usp_record__record__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t usp_record__record__pack_to_buffer
                     (const UspRecord__Record *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &usp_record__record__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UspRecord__Record *
       usp_record__record__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UspRecord__Record *)
     protobuf_c_message_unpack (&usp_record__record__descriptor,
                                allocator, len, data);
}
void   usp_record__record__free_unpacked
                     (UspRecord__Record *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &usp_record__record__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   usp_record__no_session_context_record__init
                     (UspRecord__NoSessionContextRecord         *message)
{
  static const UspRecord__NoSessionContextRecord init_value = USP_RECORD__NO_SESSION_CONTEXT_RECORD__INIT;
  *message = init_value;
}
size_t usp_record__no_session_context_record__get_packed_size
                     (const UspRecord__NoSessionContextRecord *message)
{
  assert(message->base.descriptor == &usp_record__no_session_context_record__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t usp_record__no_session_context_record__pack
                     (const UspRecord__NoSessionContextRecord *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &usp_record__no_session_context_record__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t usp_record__no_session_context_record__pack_to_buffer
                     (const UspRecord__NoSessionContextRecord *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &usp_record__no_session_context_record__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UspRecord__NoSessionContextRecord *
       usp_record__no_session_context_record__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UspRecord__NoSessionContextRecord *)
     protobuf_c_message_unpack (&usp_record__no_session_context_record__descriptor,
                                allocator, len, data);
}
void   usp_record__no_session_context_record__free_unpacked
                     (UspRecord__NoSessionContextRecord *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &usp_record__no_session_context_record__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   usp_record__session_context_record__init
                     (UspRecord__SessionContextRecord         *message)
{
  static const UspRecord__SessionContextRecord init_value = USP_RECORD__SESSION_CONTEXT_RECORD__INIT;
  *message = init_value;
}
size_t usp_record__session_context_record__get_packed_size
                     (const UspRecord__SessionContextRecord *message)
{
  assert(message->base.descriptor == &usp_record__session_context_record__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t usp_record__session_context_record__pack
                     (const UspRecord__SessionContextRecord *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &usp_record__session_context_record__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t usp_record__session_context_record__pack_to_buffer
                     (const UspRecord__SessionContextRecord *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &usp_record__session_context_record__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UspRecord__SessionContextRecord *
       usp_record__session_context_record__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UspRecord__SessionContextRecord *)
     protobuf_c_message_unpack (&usp_record__session_context_record__descriptor,
                                allocator, len, data);
}
void   usp_record__session_context_record__free_unpacked
                     (UspRecord__SessionContextRecord *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &usp_record__session_context_record__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue usp_record__record__payload_security__enum_values_by_number[2] =
{
  { "PLAINTEXT", "USP_RECORD__RECORD__PAYLOAD_SECURITY__PLAINTEXT", 0 },
  { "TLS", "USP_RECORD__RECORD__PAYLOAD_SECURITY__TLS", 1 },
};
static const ProtobufCIntRange usp_record__record__payload_security__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex usp_record__record__payload_security__enum_values_by_name[2] =
{
  { "PLAINTEXT", 0 },
  { "TLS", 1 },
};
const ProtobufCEnumDescriptor usp_record__record__payload_security__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "usp_record.Record.PayloadSecurity",
  "PayloadSecurity",
  "UspRecord__Record__PayloadSecurity",
  "usp_record",
  2,
  usp_record__record__payload_security__enum_values_by_number,
  2,
  usp_record__record__payload_security__enum_values_by_name,
  1,
  usp_record__record__payload_security__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor usp_record__record__field_descriptors[8] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UspRecord__Record, version),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "to_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UspRecord__Record, to_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "from_id",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UspRecord__Record, from_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload_security",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(UspRecord__Record, payload_security),
    &usp_record__record__payload_security__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mac_signature",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(UspRecord__Record, mac_signature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sender_cert",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(UspRecord__Record, sender_cert),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "no_session_context",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(UspRecord__Record, record_type_case),
    offsetof(UspRecord__Record, no_session_context),
    &usp_record__no_session_context_record__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "session_context",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(UspRecord__Record, record_type_case),
    offsetof(UspRecord__Record, session_context),
    &usp_record__session_context_record__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned usp_record__record__field_indices_by_name[] = {
  2,   /* field[2] = from_id */
  4,   /* field[4] = mac_signature */
  6,   /* field[6] = no_session_context */
  3,   /* field[3] = payload_security */
  5,   /* field[5] = sender_cert */
  7,   /* field[7] = session_context */
  1,   /* field[1] = to_id */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange usp_record__record__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor usp_record__record__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "usp_record.Record",
  "Record",
  "UspRecord__Record",
  "usp_record",
  sizeof(UspRecord__Record),
  8,
  usp_record__record__field_descriptors,
  usp_record__record__field_indices_by_name,
  1,  usp_record__record__number_ranges,
  (ProtobufCMessageInit) usp_record__record__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor usp_record__no_session_context_record__field_descriptors[1] =
{
  {
    "payload",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(UspRecord__NoSessionContextRecord, payload),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned usp_record__no_session_context_record__field_indices_by_name[] = {
  0,   /* field[0] = payload */
};
static const ProtobufCIntRange usp_record__no_session_context_record__number_ranges[1 + 1] =
{
  { 2, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor usp_record__no_session_context_record__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "usp_record.NoSessionContextRecord",
  "NoSessionContextRecord",
  "UspRecord__NoSessionContextRecord",
  "usp_record",
  sizeof(UspRecord__NoSessionContextRecord),
  1,
  usp_record__no_session_context_record__field_descriptors,
  usp_record__no_session_context_record__field_indices_by_name,
  1,  usp_record__no_session_context_record__number_ranges,
  (ProtobufCMessageInit) usp_record__no_session_context_record__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue usp_record__session_context_record__payload_sarstate__enum_values_by_number[4] =
{
  { "NONE", "USP_RECORD__SESSION_CONTEXT_RECORD__PAYLOAD_SARSTATE__NONE", 0 },
  { "BEGIN", "USP_RECORD__SESSION_CONTEXT_RECORD__PAYLOAD_SARSTATE__BEGIN", 1 },
  { "INPROCESS", "USP_RECORD__SESSION_CONTEXT_RECORD__PAYLOAD_SARSTATE__INPROCESS", 2 },
  { "COMPLETE", "USP_RECORD__SESSION_CONTEXT_RECORD__PAYLOAD_SARSTATE__COMPLETE", 3 },
};
static const ProtobufCIntRange usp_record__session_context_record__payload_sarstate__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex usp_record__session_context_record__payload_sarstate__enum_values_by_name[4] =
{
  { "BEGIN", 1 },
  { "COMPLETE", 3 },
  { "INPROCESS", 2 },
  { "NONE", 0 },
};
const ProtobufCEnumDescriptor usp_record__session_context_record__payload_sarstate__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "usp_record.SessionContextRecord.PayloadSARState",
  "PayloadSARState",
  "UspRecord__SessionContextRecord__PayloadSARState",
  "usp_record",
  4,
  usp_record__session_context_record__payload_sarstate__enum_values_by_number,
  4,
  usp_record__session_context_record__payload_sarstate__enum_values_by_name,
  1,
  usp_record__session_context_record__payload_sarstate__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor usp_record__session_context_record__field_descriptors[7] =
{
  {
    "session_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(UspRecord__SessionContextRecord, session_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sequence_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(UspRecord__SessionContextRecord, sequence_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "expected_id",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(UspRecord__SessionContextRecord, expected_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "retransmit_id",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(UspRecord__SessionContextRecord, retransmit_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload_sar_state",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(UspRecord__SessionContextRecord, payload_sar_state),
    &usp_record__session_context_record__payload_sarstate__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payloadrec_sar_state",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(UspRecord__SessionContextRecord, payloadrec_sar_state),
    &usp_record__session_context_record__payload_sarstate__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    7,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(UspRecord__SessionContextRecord, n_payload),
    offsetof(UspRecord__SessionContextRecord, payload),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned usp_record__session_context_record__field_indices_by_name[] = {
  2,   /* field[2] = expected_id */
  6,   /* field[6] = payload */
  4,   /* field[4] = payload_sar_state */
  5,   /* field[5] = payloadrec_sar_state */
  3,   /* field[3] = retransmit_id */
  1,   /* field[1] = sequence_id */
  0,   /* field[0] = session_id */
};
static const ProtobufCIntRange usp_record__session_context_record__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor usp_record__session_context_record__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "usp_record.SessionContextRecord",
  "SessionContextRecord",
  "UspRecord__SessionContextRecord",
  "usp_record",
  sizeof(UspRecord__SessionContextRecord),
  7,
  usp_record__session_context_record__field_descriptors,
  usp_record__session_context_record__field_indices_by_name,
  1,  usp_record__session_context_record__number_ranges,
  (ProtobufCMessageInit) usp_record__session_context_record__init,
  NULL,NULL,NULL    /* reserved[123] */
};
