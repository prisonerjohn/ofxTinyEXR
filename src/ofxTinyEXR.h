#pragma once

#include "ofImage.h"

class ofxTinyEXR {
    
public:
    
    static bool loadImage(ofFloatImage & img, std::string filepath);
    //bool loadImageExp(ofFloatImage & img, std::string filepath);
    
    static bool saveImage( const ofFloatImage & img, std::string filepath);
    
    static bool saveHDRImage( const ofFloatImage & img, std::string filepath);
};
