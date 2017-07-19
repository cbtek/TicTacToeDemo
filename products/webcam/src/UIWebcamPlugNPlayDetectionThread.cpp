/*
    UIWebcamPlugNPlayDetectionThread.cpp
*/
//----------------------------------------
//UIWebcamPlugNPlayDetectionThread.cpp generated by cbtek on 07-18-2017 at 05:03:44 PM
//----------------------------------------
#include "UIWebcamPlugNPlayDetectionThread.h"

namespace pf_projects {
namespace products {
namespace webcam {


UIWebcamPlugNPlayDetectionThread::UIWebcamPlugNPlayDetectionThread()
{

}

const QList<QCameraInfo> &UIWebcamPlugNPlayDetectionThread::getCurrentCameraInfoList() const
{
    return m_listCurrentCameraInfo;
}

void UIWebcamPlugNPlayDetectionThread::run()
{
    //Grab list of available cameras
    QList<QCameraInfo> detectedWebcamInfoList = QCameraInfo::availableCameras();

    //Send noCamerasAvailable signal if no camera info is available
    if (detectedWebcamInfoList.size() == 0)
    {
        emit noCamerasAvailable();
    }

    //Loop over camera info list and look for any changes.
    //For obvious check is to see if more (or less) cameras
    //were plugged into the system
    if (detectedWebcamInfoList.size() == m_listCurrentCameraInfo.size())
    {
        int index = 0;
        bool changesDetected = false;
        for (const QCameraInfo &info : detectedWebcamInfoList)
        {
            if (info != m_listCurrentCameraInfo[index])
            {
                changesDetected = true;
            }
            ++index;
        }
        if (changesDetected == false)
        {
            return;
        }
    }

    //At this point we found some changes.
    //Send signal to main window that changes
    //occured to how many cameras were detected
    m_listCurrentCameraInfo = detectedWebcamInfoList;
    emit availableCamerasChanged();
}

UIWebcamPlugNPlayDetectionThread::~UIWebcamPlugNPlayDetectionThread()
{

}
}}}//end namespace


