/*==============================================================================

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qAppWelcomeScreen_h
#define __qAppWelcomeScreen_h

// Qt includes
#include <QtDeclarative/QDeclarativeView>

// App includes
#include "qSlicerAppExport.h"
class qAppWelcomeScreenPrivate;

class Q_SLICER_APP_EXPORT qAppWelcomeScreen
  : public QDeclarativeView
{
  Q_OBJECT
public:
  typedef QDeclarativeView Superclass;
  qAppWelcomeScreen(QWidget* parent = 0);
  virtual ~qAppWelcomeScreen();

public slots:
  void loadMouseAtlas();

signals:
  /// Fired when the welcome screen is done and the workflow can start.
  void done();

protected:
  QScopedPointer<qAppWelcomeScreenPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qAppWelcomeScreen);
};

#endif
