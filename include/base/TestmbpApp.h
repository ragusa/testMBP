#ifndef TESTMBPAPP_H
#define TESTMBPAPP_H

#include "MooseApp.h"

class TestmbpApp;

template<>
InputParameters validParams<TestmbpApp>();

class TestmbpApp : public MooseApp
{
public:
  TestmbpApp(const std::string & name, InputParameters parameters);
  virtual ~TestmbpApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* TESTMBPAPP_H */
