#pragma once
#ifndef CONVERT_IMAGE_H
#define CONVERT_IMAGE_H

#include "HV_CAM_DAHUA.h"

class ConvertImage {
public:
	ConvertImage();
	~ConvertImage();

public:
	void process_image();
	int num_samples = 0;
	bool is_frame_ok;

private:
	int nBGRBufferSize1;
	const void* pImage1;
	queue<uchar*> _imgBuffer1;
	queue<int> _imgIDs1;
	Mat image1;
	IMGCNV_SOpenParam openParam1;
	IMGCNV_EErr status1;
};

extern vector<Mat> img_list1;

#endif // !CONVERTIMAGE_H