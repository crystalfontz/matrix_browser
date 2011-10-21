#include <QtGui>
#include <QWebView>
#include <QGraphicsWebView>
int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	const int width = 800;
	const int height = 480;

	QGraphicsScene scene;

	QGraphicsView view(&scene);
	view.setFrameShape(QFrame::NoFrame);
	view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

	QGraphicsWebView webview;
	webview.resize(width, height);
	webview.load(QUrl("http://localhost:8080"));

	scene.addItem(&webview);

	view.resize(width, height);
	view.show();

	return app.exec();
}



