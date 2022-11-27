#include "detection_responder.h"

// This dummy implementation writes person and no person scores to the error
// console. Real applications will want to take some custom action instead, and
// should implement their own versions of this function.
void RespondToDetection(tflite::ErrorReporter* error_reporter,
                        uint8_t five_hundred_scode,  uint8_t one_tousand_score, uint8_t two_tousand_score) {
        
        // Here we include real code that will perform actions

  error_reporter->Report("five_hundred_scode:%d one_tousand_score:%d two_tousand_score:%d", 
                        five_hundred_scode,
                        one_tousand_score, 
                        two_tousand_score);
}
