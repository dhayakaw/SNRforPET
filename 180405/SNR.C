#include "Normalization.h"
#include "Image.h"
#include "TRint.h"

int main(int argc, char* argv[]) {
  TRint app( "app", &argc, argv );
  Normalization rec;
  rec.Loop();
  Image image;
  image.Loop();
  app.Run();
  return 0;
}
