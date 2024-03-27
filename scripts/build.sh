#!/bin/bash

cd "$(dirname "$0")"
cmake -S ../SDKTest -B ../build
cmake --build ../build
