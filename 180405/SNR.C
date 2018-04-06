#include "Image.h"
#include "TRint.h"

int main(int argc, char* argv[]) {
  TRint app( "app", &argc, argv );
  Image* image = new Image();
  image->Loop();
  app.Run();
  return 0;
}
