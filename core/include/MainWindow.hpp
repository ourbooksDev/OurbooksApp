#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

// Qt
// Required for inheritance
#include <QMainWindow>
#include <QHBoxLayout>

class MenuBar;
class MainWidgets;

class MainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	explicit MainWindow(QWidget *parent=nullptr);

private:
	//void initWidgets();
	void createWidgets();

	MenuBar *menuBar;
	MainWidgets *mainWidget;

	QHBoxLayout *setupLayout;
};

#endif
