/************************************************************************************
 * WidgetFactory : this is an highly simplified example project demonstrating how   *
 *                 to implement factory method using static member function for     *
 *                 creating objects.                                                *
 * The project includes the following files:                                        *
 * - WidgetFactory.pro            : the Qt project file                             *
 * - widgetfactoryinterface.h     : header file for the abstract class (interface)  *
 * - widgetfactoryinterface.cc    : source file for the abstract class (interface)  *
 * - widgetfactory.h              : header file for implementation                  *
 * - widgetfactory.cc             : source code for implementation                  *
 * - main.cc                      : "client" code file                              *
 * Author: Chuan Zhang, Jan. 2016                                                   *
 ************************************************************************************/
#include <QApplication>
#include <QMessageBox>
#include "widgetfactory.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);

	if (argc != 2)
	{
		QMessageBox::information(0, "Error:", QString("USAGE: %1 <options>").arg(argv[0]));
		QApplication::quit();
	}
	
	WidgetFactory::RegisterWidget("label",     Widgets0::Create);
	WidgetFactory::RegisterWidget("button",    Widgets1::Create);
	WidgetFactory::RegisterWidget("line_edit", Widgets2::Create);
	
	std::string option(argv[1]);
	WidgetFactoryInterface *wfi = WidgetFactory::CreateWidget(option, "Hello World!");
	wfi->Print();

	return a.exec();
}

