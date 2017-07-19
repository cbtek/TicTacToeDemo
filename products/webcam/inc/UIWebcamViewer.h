/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file UIWebcamViewer.h
 * @date 07-18-17
 **/

#pragma once

#include <QCameraInfo>
#include <QCamera>
#include <QCameraImageCapture>
#include <QCameraViewfinder>
#include <QList>
#include <QMediaRecorder>
#include <QWidget>

class Ui_UIWebcamViewer;
namespace pf_projects {
namespace products {
namespace webcam {

/**
 * @brief This class represents a single viewer for
 * a camera.  It will be displayed on the main window
 * using a grid layout along with any other cameras that
 * are connected.
 */
class UIWebcamViewer : public QWidget
{
    Q_OBJECT
public:

    /**
     * @brief UIWebcamViewer Constructor
     * @param cameraInfo QCameraInfo object to initialize camera with
     * @param parent
     */
    explicit UIWebcamViewer(const QCameraInfo &cameraInfo, QWidget *parent = 0);

    /**
     * @brief captureImage Capture image and save to default "Pictures" folder
     * @param suffix Text to append in middle of file-name (after name, before extension)
     */
    void captureImage(const QString &suffix = "");

   /**
    * @brief UIWebcamViewer    
	*/
    ~UIWebcamViewer();

protected:
    /**
     * @brief resizeEvent Called whenever widget resizes
     * @param event
     */
    void resizeEvent(QResizeEvent *event);

private:
    /** 
    * MOC generated ui class for this widget
    */
     Ui_UIWebcamViewer *m_ui;

     /**
      * @brief m_availableCameraList Will hold available cameras
      */
     QList<QCameraInfo> m_availableCameraList;

     /**
      * @brief m_camCurrent
      */
     QCamera *m_camCurrent;

     /**
      * @brief m_currentViewFinder
      */
     QCameraViewfinder *m_camCurrentViewFinder;

     /**
      * @brief m_camImageCapture
      */
     QCameraImageCapture *m_camImageCapture;

     /**
      * @brief m_camMediaRecorder
      */
     QMediaRecorder *m_camMediaRecorder;

private slots:

     /**
      * @brief onCaptureImage
      */
     void onCaptureImage();
};
}}}//end namespace
