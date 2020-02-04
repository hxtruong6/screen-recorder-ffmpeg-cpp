//#include <QApplication>
//#include <QPushButton>
#include "include/ScreenRecorder.h"
#include "include/RecordManager.h"

using namespace std;

int main(int argc, char **argv) {
//    QApplication app(argc, argv);
//
//    QPushButton button("Hello world !");
//    button.show();
//
//    return app.exec();

//    ScreenRecorder screen_record;
//    if (screen_record.RegisterDevice()) {
//        screen_record.InitOutputFile();
//        screen_record.CaptureVideoFrames();
//        cout << "\nprogram executed successfully\n";
//    }

    RecordManager *recordManager = new RecordManager(5);


    return 0;
}