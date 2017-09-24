#include <highgui.h>
#include <cv.h>


int main()
{
	IplImage *frame;
	CvCapture* capture = cvCaptureFromCAM(0);

	cvNamedWindow("Test", 1);

	while (capture)
	{
		frame = cvQueryFrame(capture);
		cvShowImage("Test", frame);

		if (cvWaitKey(33) >= 27)
		{
			break;
		}
	}


	cvReleaseCapture(&capture);
	cvDestroyWindow("Test");


	return 0;
}
