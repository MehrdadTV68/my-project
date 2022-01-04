; Auto-generated. Do not edit!


(cl:in-package robot_description-srv)


;//! \htmlinclude BugService-request.msg.html

(cl:defclass <BugService-request> (roslisp-msg-protocol:ros-message)
  ((data
    :reader data
    :initarg :data
    :type cl:boolean
    :initform cl:nil)
   (x
    :reader x
    :initarg :x
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0))
)

(cl:defclass BugService-request (<BugService-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BugService-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BugService-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_description-srv:<BugService-request> is deprecated: use robot_description-srv:BugService-request instead.")))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <BugService-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_description-srv:data-val is deprecated.  Use robot_description-srv:data instead.")
  (data m))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <BugService-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_description-srv:x-val is deprecated.  Use robot_description-srv:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <BugService-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_description-srv:y-val is deprecated.  Use robot_description-srv:y instead.")
  (y m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BugService-request>) ostream)
  "Serializes a message object of type '<BugService-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'data) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BugService-request>) istream)
  "Deserializes a message object of type '<BugService-request>"
    (cl:setf (cl:slot-value msg 'data) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BugService-request>)))
  "Returns string type for a service object of type '<BugService-request>"
  "robot_description/BugServiceRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BugService-request)))
  "Returns string type for a service object of type 'BugService-request"
  "robot_description/BugServiceRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BugService-request>)))
  "Returns md5sum for a message object of type '<BugService-request>"
  "2e7093e959d0985796ebd7942ac40474")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BugService-request)))
  "Returns md5sum for a message object of type 'BugService-request"
  "2e7093e959d0985796ebd7942ac40474")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BugService-request>)))
  "Returns full string definition for message of type '<BugService-request>"
  (cl:format cl:nil "bool data~%float64 x~%float64 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BugService-request)))
  "Returns full string definition for message of type 'BugService-request"
  (cl:format cl:nil "bool data~%float64 x~%float64 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BugService-request>))
  (cl:+ 0
     1
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BugService-request>))
  "Converts a ROS message object to a list"
  (cl:list 'BugService-request
    (cl:cons ':data (data msg))
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
))
;//! \htmlinclude BugService-response.msg.html

(cl:defclass <BugService-response> (roslisp-msg-protocol:ros-message)
  ((data
    :reader data
    :initarg :data
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass BugService-response (<BugService-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BugService-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BugService-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_description-srv:<BugService-response> is deprecated: use robot_description-srv:BugService-response instead.")))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <BugService-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_description-srv:data-val is deprecated.  Use robot_description-srv:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BugService-response>) ostream)
  "Serializes a message object of type '<BugService-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'data) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BugService-response>) istream)
  "Deserializes a message object of type '<BugService-response>"
    (cl:setf (cl:slot-value msg 'data) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BugService-response>)))
  "Returns string type for a service object of type '<BugService-response>"
  "robot_description/BugServiceResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BugService-response)))
  "Returns string type for a service object of type 'BugService-response"
  "robot_description/BugServiceResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BugService-response>)))
  "Returns md5sum for a message object of type '<BugService-response>"
  "2e7093e959d0985796ebd7942ac40474")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BugService-response)))
  "Returns md5sum for a message object of type 'BugService-response"
  "2e7093e959d0985796ebd7942ac40474")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BugService-response>)))
  "Returns full string definition for message of type '<BugService-response>"
  (cl:format cl:nil "bool data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BugService-response)))
  "Returns full string definition for message of type 'BugService-response"
  (cl:format cl:nil "bool data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BugService-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BugService-response>))
  "Converts a ROS message object to a list"
  (cl:list 'BugService-response
    (cl:cons ':data (data msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'BugService)))
  'BugService-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'BugService)))
  'BugService-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BugService)))
  "Returns string type for a service object of type '<BugService>"
  "robot_description/BugService")