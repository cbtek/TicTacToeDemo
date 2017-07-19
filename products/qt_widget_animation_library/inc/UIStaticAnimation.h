/*
    UIStaticAnimation.h
    

*/
#pragma once

#include <QWidget>
#include <QPainter>
#include <QImage>
#include <QTimer>

#include "utility/inc/Random.h"


namespace pf_projects {
namespace products {
namespace qt_widget_animation_library {

class UIStaticAnimation :public QWidget
{
    Q_OBJECT

public:
   /**
     * @brief UIStaticAnimation     
     */
    UIStaticAnimation(QWidget *parent = nullptr);
    

    /**
     * @brief start
     * @param updateRate
     */
    void start(int minGrayscale = 0,
               int maxGrayscale = 255,
               int timeout = 60,
               int size = 32,
               const QColor &hue = QColor(255,255,255));

    /**
      * Destructor for this class      
      */
    ~UIStaticAnimation();
private:
    QImage m_imgBackBuffer;
    cbtek::common::utility::Random m_rndRandom;
    int m_intTimeout;
    int m_intSize;
    int m_intHueTransparency;
    int m_intMinGrayscale;
    int m_intMaxGrayscale;
    QColor m_qColorHue;

protected:
    void resizeEvent(QResizeEvent *event);
    void timerEvent(QTimerEvent *event);
    void paintEvent(QPaintEvent *event);

signals:
    void rendered(QImage frame);

private slots:
    void onInitialize();
    
};
}}}//end namespace
