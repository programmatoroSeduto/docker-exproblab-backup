// Auto-generated. Do not edit!

// (in-package rosplan_dispatch_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class EsterelPlanEdge {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.edge_type = null;
      this.edge_id = null;
      this.edge_name = null;
      this.signal_type = null;
      this.source_ids = null;
      this.sink_ids = null;
      this.duration_lower_bound = null;
      this.duration_upper_bound = null;
    }
    else {
      if (initObj.hasOwnProperty('edge_type')) {
        this.edge_type = initObj.edge_type
      }
      else {
        this.edge_type = 0;
      }
      if (initObj.hasOwnProperty('edge_id')) {
        this.edge_id = initObj.edge_id
      }
      else {
        this.edge_id = 0;
      }
      if (initObj.hasOwnProperty('edge_name')) {
        this.edge_name = initObj.edge_name
      }
      else {
        this.edge_name = '';
      }
      if (initObj.hasOwnProperty('signal_type')) {
        this.signal_type = initObj.signal_type
      }
      else {
        this.signal_type = 0;
      }
      if (initObj.hasOwnProperty('source_ids')) {
        this.source_ids = initObj.source_ids
      }
      else {
        this.source_ids = [];
      }
      if (initObj.hasOwnProperty('sink_ids')) {
        this.sink_ids = initObj.sink_ids
      }
      else {
        this.sink_ids = [];
      }
      if (initObj.hasOwnProperty('duration_lower_bound')) {
        this.duration_lower_bound = initObj.duration_lower_bound
      }
      else {
        this.duration_lower_bound = 0.0;
      }
      if (initObj.hasOwnProperty('duration_upper_bound')) {
        this.duration_upper_bound = initObj.duration_upper_bound
      }
      else {
        this.duration_upper_bound = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsterelPlanEdge
    // Serialize message field [edge_type]
    bufferOffset = _serializer.byte(obj.edge_type, buffer, bufferOffset);
    // Serialize message field [edge_id]
    bufferOffset = _serializer.int32(obj.edge_id, buffer, bufferOffset);
    // Serialize message field [edge_name]
    bufferOffset = _serializer.string(obj.edge_name, buffer, bufferOffset);
    // Serialize message field [signal_type]
    bufferOffset = _serializer.int32(obj.signal_type, buffer, bufferOffset);
    // Serialize message field [source_ids]
    bufferOffset = _arraySerializer.int32(obj.source_ids, buffer, bufferOffset, null);
    // Serialize message field [sink_ids]
    bufferOffset = _arraySerializer.int32(obj.sink_ids, buffer, bufferOffset, null);
    // Serialize message field [duration_lower_bound]
    bufferOffset = _serializer.float64(obj.duration_lower_bound, buffer, bufferOffset);
    // Serialize message field [duration_upper_bound]
    bufferOffset = _serializer.float64(obj.duration_upper_bound, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsterelPlanEdge
    let len;
    let data = new EsterelPlanEdge(null);
    // Deserialize message field [edge_type]
    data.edge_type = _deserializer.byte(buffer, bufferOffset);
    // Deserialize message field [edge_id]
    data.edge_id = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [edge_name]
    data.edge_name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [signal_type]
    data.signal_type = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [source_ids]
    data.source_ids = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [sink_ids]
    data.sink_ids = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [duration_lower_bound]
    data.duration_lower_bound = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [duration_upper_bound]
    data.duration_upper_bound = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.edge_name);
    length += 4 * object.source_ids.length;
    length += 4 * object.sink_ids.length;
    return length + 37;
  }

  static datatype() {
    // Returns string type for a message object
    return 'rosplan_dispatch_msgs/EsterelPlanEdge';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1d2c55d97ec5947580a42b9057d254ce';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #EsterelPlanEdge message
    
    byte CONDITION_EDGE   = 0
    byte START_END_ACTION_EDGE = 1
    byte INTERFERENCE_EDGE = 2
    
    byte edge_type
    int32 edge_id
    string edge_name
    int32 signal_type
    int32[] source_ids
    int32[] sink_ids
    float64 duration_lower_bound
    float64 duration_upper_bound
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new EsterelPlanEdge(null);
    if (msg.edge_type !== undefined) {
      resolved.edge_type = msg.edge_type;
    }
    else {
      resolved.edge_type = 0
    }

    if (msg.edge_id !== undefined) {
      resolved.edge_id = msg.edge_id;
    }
    else {
      resolved.edge_id = 0
    }

    if (msg.edge_name !== undefined) {
      resolved.edge_name = msg.edge_name;
    }
    else {
      resolved.edge_name = ''
    }

    if (msg.signal_type !== undefined) {
      resolved.signal_type = msg.signal_type;
    }
    else {
      resolved.signal_type = 0
    }

    if (msg.source_ids !== undefined) {
      resolved.source_ids = msg.source_ids;
    }
    else {
      resolved.source_ids = []
    }

    if (msg.sink_ids !== undefined) {
      resolved.sink_ids = msg.sink_ids;
    }
    else {
      resolved.sink_ids = []
    }

    if (msg.duration_lower_bound !== undefined) {
      resolved.duration_lower_bound = msg.duration_lower_bound;
    }
    else {
      resolved.duration_lower_bound = 0.0
    }

    if (msg.duration_upper_bound !== undefined) {
      resolved.duration_upper_bound = msg.duration_upper_bound;
    }
    else {
      resolved.duration_upper_bound = 0.0
    }

    return resolved;
    }
};

// Constants for message
EsterelPlanEdge.Constants = {
  CONDITION_EDGE: 0,
  START_END_ACTION_EDGE: 1,
  INTERFERENCE_EDGE: 2,
}

module.exports = EsterelPlanEdge;
