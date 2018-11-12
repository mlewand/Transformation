
# Transformation

This project contains a bunch of functions for easing functions.

My goal was to wrap different easings with a common interface, so that I can change them at run time.

## Usage

Each class contains `ease` function, which takes following parameters:

* t - time - Current time.
* b - base - Indicates what is the lowest value returned by easing function.
* c - change - Defines the difference from max returned value, relative to the base. Say base is 10, change is 40, then the max returned value is 50.
* d - duration - Total duration.

Sample code:

```cpp
float curTime = 20;
float totalDuration = 100;
TransformationBounceOut transformation = new TransformationBounceOut();
// Following call will return anything between 0 and 100 based on time and totalDuration.
transformation.ease( time, 0.0, 100.0, totalDuration );
```

## Easing Preview

You can compare different easing implementations here: https://easings.net/