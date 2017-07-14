/*
    UIWebcamViewer.h
    

*/
#pragma once

#include <QCameraInfo>
#include <QCamera>
#include <QCameraViewfinder>
#include <QList>
#include <QWidget>


class Ui_UIWebcamViewer;
namespace pf_projects {
namespace products {
namespace webcam {

class UIWebcamViewer : public QWidget
{
    Q_OBJECT
public:
   /**
    * @brief UIWebcamViewer
    * @param parent Pointer to parent widget. Defaults to null.
	*/		
    explicit UIWebcamViewer(QWidget *parent = 0);

   /**
    * @brief UIWebcamViewer
    *
	*/
    ~UIWebcamViewer();
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
      * @brief m_currentCamera
      */
     QCamera *m_currentCamera;

     /**
      * @brief m_currentViewFinder
      */
     QCameraViewfinder *m_currentViewFinder;

private slots:

     /**
      * @brief onCaptureImage
      */
     void onCaptureImage();

     /**
      * @brief onEnableAutoCapture
      */
     void onEnableAutoCapture();

     /**
      * @brief onChangeVideoSource
      * @param index
      */
     void onChangeVideoSource(int index);

     /**
      * @brief onBrowseForCaptureOutput
      */
     void onBrowseForCaptureOutput();
};
}}}//end namespace
