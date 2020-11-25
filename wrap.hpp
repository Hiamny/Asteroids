#pragma once
   
   namespace engine {

  inline float wrap(  float x,   float min,  float max)
    {
        if (x < min)
            return max - (min - x);
        if (x > max)
            return min + (x - max);
        return x;
    }

   } ;



