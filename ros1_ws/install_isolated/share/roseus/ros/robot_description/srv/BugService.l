;; Auto-generated. Do not edit!


(when (boundp 'robot_description::BugService)
  (if (not (find-package "ROBOT_DESCRIPTION"))
    (make-package "ROBOT_DESCRIPTION"))
  (shadow 'BugService (find-package "ROBOT_DESCRIPTION")))
(unless (find-package "ROBOT_DESCRIPTION::BUGSERVICE")
  (make-package "ROBOT_DESCRIPTION::BUGSERVICE"))
(unless (find-package "ROBOT_DESCRIPTION::BUGSERVICEREQUEST")
  (make-package "ROBOT_DESCRIPTION::BUGSERVICEREQUEST"))
(unless (find-package "ROBOT_DESCRIPTION::BUGSERVICERESPONSE")
  (make-package "ROBOT_DESCRIPTION::BUGSERVICERESPONSE"))

(in-package "ROS")





(defclass robot_description::BugServiceRequest
  :super ros::object
  :slots (_data _x _y ))

(defmethod robot_description::BugServiceRequest
  (:init
   (&key
    ((:data __data) nil)
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    )
   (send-super :init)
   (setq _data __data)
   (setq _x (float __x))
   (setq _y (float __y))
   self)
  (:data
   (&optional (__data :null))
   (if (not (eq __data :null)) (setq _data __data)) _data)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:serialization-length
   ()
   (+
    ;; bool _data
    1
    ;; float64 _x
    8
    ;; float64 _y
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _data
       (if _data (write-byte -1 s) (write-byte 0 s))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _data
     (setq _data (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass robot_description::BugServiceResponse
  :super ros::object
  :slots (_data ))

(defmethod robot_description::BugServiceResponse
  (:init
   (&key
    ((:data __data) nil)
    )
   (send-super :init)
   (setq _data __data)
   self)
  (:data
   (&optional (__data :null))
   (if (not (eq __data :null)) (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; bool _data
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _data
       (if _data (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _data
     (setq _data (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass robot_description::BugService
  :super ros::object
  :slots ())

(setf (get robot_description::BugService :md5sum-) "2e7093e959d0985796ebd7942ac40474")
(setf (get robot_description::BugService :datatype-) "robot_description/BugService")
(setf (get robot_description::BugService :request) robot_description::BugServiceRequest)
(setf (get robot_description::BugService :response) robot_description::BugServiceResponse)

(defmethod robot_description::BugServiceRequest
  (:response () (instance robot_description::BugServiceResponse :init)))

(setf (get robot_description::BugServiceRequest :md5sum-) "2e7093e959d0985796ebd7942ac40474")
(setf (get robot_description::BugServiceRequest :datatype-) "robot_description/BugServiceRequest")
(setf (get robot_description::BugServiceRequest :definition-)
      "bool data
float64 x
float64 y
---
bool data
")

(setf (get robot_description::BugServiceResponse :md5sum-) "2e7093e959d0985796ebd7942ac40474")
(setf (get robot_description::BugServiceResponse :datatype-) "robot_description/BugServiceResponse")
(setf (get robot_description::BugServiceResponse :definition-)
      "bool data
float64 x
float64 y
---
bool data
")



(provide :robot_description/BugService "2e7093e959d0985796ebd7942ac40474")


