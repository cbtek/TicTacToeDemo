/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file UIWebcamPlugNPlayDetectionThread.h
 * @date 07-18-17
 **/

#pragma once

#include <QCameraInfo>
#include <QThread>

namespace pf_projects {
namespace products {
namespace webcam {

/**
 * @brief This thread was created to periodically check for
 * changes to how many cameras are connecting without
 * slowing down the main UI thread.
 */
class UIWebcamPlugNPlayDetectionThread :public QThread
{
    Q_OBJECT
public:
   /**
     * @brief UIWebcamPlugNPlayDetectionThread Constructor for this thread
     */
    UIWebcamPlugNPlayDetectionThread();
    
    /**
     * @brief m_listCurrentCameraInfo
     */
    const QList <QCameraInfo> &getCurrentCameraInfoList() const;

    /**
      * @brief Destructor for this thread
      */
    ~UIWebcamPlugNPlayDetectionThread();
private:
    
    /**
     * @brief run Entry point for this thread
     */
    void run();

    /**
     * @brief m_cameraInfoList Contains current list of
     * available cameras.
     */
    QList <QCameraInfo> m_listCurrentCameraInfo;
signals:

    /**
     * @brief availableCamerasChanged This singal is sent whenever
     * changes are detected from the last time it was sent
     * @param cameraInfoList List of available cameras
     */
    void availableCamerasChanged();

    /**
     * @brief noCamerasAvailable This signal is sent when no
     * cameras are detected
     */
    void noCamerasAvailable();
};
}}}//end namespace
