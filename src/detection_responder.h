// Provides an interface to take an action based on the output 
//from the money recognition model.
#ifndef TENSORFLOW_LITE_MKD_MONEY_RECOGNITION_DETECTION_RESPONDER_H_
#define TENSORFLOW_LITE_MKD_MONEY_RECOGNITION_DETECTION_RESPONDER_H_

#include "tensorflow/lite/c/c_api_internal.h"
#include "tensorflow/lite/experimental/micro/micro_error_reporter.h"

// Called every time the results of a money recognitio run are available. The
// `person_score` has the numerical confidence that the captured image contains
// a person, and `no_person_score` has the numerical confidence that the image
// does not contain a person. Typically if person_score > no person score, the
// image is considered to contain a person.  This threshold may be adjusted for
// particular applications.
// void RespondToDetection(tflite::ErrorReporter* error_reporter,
//                         uint8_t person_score, 
//                         uint8_t no_person_score,
//                         uint8_t two_tousand_score);

// Called every time the results of a money recognitio run are available. The
// `five_hundred_scode` has the numerical confidence that the captured image contains
// a five hundred mkd banknote, `one_tousand_score` has the numerical 
// confidence that the image contains a one tousand mkd banknote and `two_tousand_score`
// has the numerical confidence that the image contains a two tousand mkd banknote
// Typically if five_hundred_scode > one_tousand_score and 
// five_hundred_scode > two_tousand_score, the image is considered to contain 
// a five hundred mkd banknote. This threshold may be adjusted 
// for particular applications.
void RespondToDetection(tflite::ErrorReporter* error_reporter,
                        uint8_t five_hundred_scode, 
                        uint8_t one_tousand_score,
                        uint8_t two_tousand_score);
#endif  // TENSORFLOW_LITE_MKD_MONEY_RECOGNITION_DETECTION_RESPONDER_H_
