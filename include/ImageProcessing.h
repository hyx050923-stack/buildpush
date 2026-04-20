#ifndef COMBINED_IMAGE_PROC_H
#define COMBINED_IMAGE_PROC_H

#ifdef _WIN32
    #ifdef IMAGEPROC_EXPORTS
        #define IMAGEPROC_API __declspec(dllexport)
    #else
        #define IMAGEPROC_API __declspec(dllimport)
    #endif
#else
    #define IMAGEPROC_API __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
extern "C" {
#endif

IMAGEPROC_API void processROIHistEqualization(
    const char* imgData, int width, int height, 
    int roiX, int roiY, int roiW, int roiH, 
    const char* outData);

IMAGEPROC_API bool IntensityNContrast(
    const char* input_path, const char* output_path, double alpha, double c);

#ifdef __cplusplus
}
#endif

#endif // COMBINED_IMAGE_PROC_H
