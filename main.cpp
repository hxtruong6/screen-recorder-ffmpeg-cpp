//#include <QApplication>
//#include <QPushButton>
#include "include/ScreenRecorder.h"

using namespace std;

int main(int argc, char** argv)
{
//    QApplication app(argc, argv);
//
//    QPushButton button("Hello world !");
//    button.show();
//
//    return app.exec();

    ScreenRecorder screen_record;

    screen_record.openCamera();
//    screen_record.init_outputfile();
//    screen_record.CaptureVideoFrames();

    cout << "\nprogram executed successfully\n";

    return 0;
}