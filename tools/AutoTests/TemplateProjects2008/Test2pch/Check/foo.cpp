#include "pch.h"
//#include "test.h"
#include "foo.h"
////#CUSTOMINCLUDE

Foo::Foo(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);
}

Foo::~Foo()
{

}
