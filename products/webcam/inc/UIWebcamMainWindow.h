/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file UIWebcamMainWindow.h
 * @date 07-18-17
 **/

#pragma once

#include <QCameraInfo>
#include <QMainWindow>
#include <QTimerEvent>

#include "UIWebcamViewer.h"
#include "UIWebcamPlugNPlayDetectionThread.h"

class Ui_UIWebcamMainWindow;

namespace pf_projects {
namespace products {
namespace webcam {

/**
 * @brief This is the main view associated with the webcam program.
 */
class UIWebcamMainWindow : public QMainWindow
{
    Q_OBJECT
public:
   /**
    * @brief UIWebcamMainWindow
    * @param parent Pointer to parent widget. Defaults to null.
	*/		
    explicit UIWebcamMainWindow(QWidget *parent = 0);
        
   /**
    * @brief UIWebcamMainWindow
    *
	*/
    ~UIWebcamMainWindow();

private:
    /** 
    * MOC generated ui class for this widget
    */
    Ui_UIWebcamMainWindow *m_ui;

    /**
     * @brief m_intRowCount Current row count for individual cameras.
     */
    int m_intRowCount;

    /**
     * @brief m_intColumnCount Current column count for individual cameras.
     */
    int m_intColumnCount;

    /**
     * @brief m_listCameraInfo List of QCameraInfo objects
     */
    QList<QCameraInfo> m_listCameraInfo;

    /**
     * @brief m_ptrDetectionThread Thread for detecting new
     * cameras.
     */
    UIWebcamPlugNPlayDetectionThread *m_ptrDetectionThread;

    /**
     * @brief m_listWebcamViewers List of UIWebcamViewers used
     * for the "Capture All" button
     */
    QList<UIWebcamViewer*> m_listWebcamViewers;

protected:
    /**
      * @brief timerEvent Called once every 250ms and checks m_ptrDetectionThread
      * for any changes to number of cameras connected to computer.
      * @param event
      */
     void timerEvent(QTimerEvent *event);

private slots:
     /**
      * @brief onCaptureAll This runs the "Capture Image" command on all
      * detected cameras
      */
     void onCaptureAll();

     /**
      * @brief onRescanForCameras This slot rescans for new cameras and populates
      * the view
      */
     void onRescanForCameras();

     /**
      * @brief onAddCameraFeeds This slot is called to populate the view with
      * the number of cameras detected
      */
     void onAddCameraFeeds();

     /**
      * @brief onClose This is called when the "Close" button is pressed
      */
     void onClose();

     /**
      * @brief onAvailableCamerasUpdated This slot is called when the detection thread
      * determines that cameras have been added/removed
      */
     void onAvailableCamerasUpdated();

     /**
      * @brief onNoCamerasAvailable This slot is called when the detection thread
      * determines that no cameras are connected to the computer
      */
     void onNoCamerasAvailable();
};
}}}//end namespace
