#include "common.h"
#include<animal/animal.h>


main (int argc, char *argv[])
{
   Img *im;
   animal_err_set_trace(ANIMAL_ERR_TRACE_ON);

   im = imread("/home/rfabbri/tmp/sip/images/bin.xpm");
   if (!im)
      animal_err_default_reporter();

   imfree(&im);

   im = imread("/home/rfabbri/tmp/sip/images/bin.xpm");
   if (!im)
      animal_err_default_reporter();

   animal_heap_report(NULL);

	return 0;
}
