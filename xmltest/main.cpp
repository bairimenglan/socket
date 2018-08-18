#include <iostream>
#include "tinyxml.h"

int main() {
    TiXmlDocument doc( "demotest.xml" );
    bool loadOkay = doc.LoadFile();

    if ( !loadOkay )
    {
        printf( "Could not load test file 'demotest.xml'. Error='%s'. Exiting.\n", doc.ErrorDesc() );
        exit( 1 );
    }



    return 0;
}