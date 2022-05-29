

#pragma once

#include "ofMain.h"
#include <iostream>

class ofxTinyEXR {
    
public:
    
    static bool loadImage(ofFloatImage & img, string filepath);
    //bool loadImageExp(ofFloatImage & img, string filepath);
    
    static bool saveImage( const ofFloatImage & img, string filepath);
    
    static bool saveHDRImage( const ofFloatImage & img, string filepath);
};


