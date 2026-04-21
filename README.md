# ImageProcessing 图像处理工具库说明文档

## 📦 软件包说明
本压缩包包含了 `ImageProcessing` 动态链接库（DLL）及其开发所需的所有依赖文件。该库旨在提供高效、易用的图像增强与处理功能，底层基于 OpenCV 构建。

### 📁 目录结构
* **bin/**：包含 `ImageProcessing.dll` 以及运行时依赖 `opencv_world4100.dll`。
* **include/**：包含 `ImageProcessing.h` 头文件，定义了 C 风格的导出接口。
* **lib/**：包含 `ImageProcessing.lib` 导入库，用于编译期链接。
### 当前函数说明
* **processROIHistEqualization**: 该函数通过分析图像中指定 ROI 区域的亮度分布（直方图），生成一个最优的对比度映射表（LUT），并将其应用到整幅图像中。
```
  @param width    图像宽度
  @param height   图像高度
  @param roiX     ROI 区域左上角横坐标
  @param roiY     ROI 区域左上角纵坐标
  @param roiW     ROI 区域宽度
  @param roiH     ROI 区域高度
  @param outData  输出图像的数据指针（空间需由调用者提前分配，大小同输入）
```
