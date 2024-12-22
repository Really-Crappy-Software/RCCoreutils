cd libcap-source
make
sudo make install
cd ../
cd libcap-ng-source
./autogen.sh
./configure
make
make install
