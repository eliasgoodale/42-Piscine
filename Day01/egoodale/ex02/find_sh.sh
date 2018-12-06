#!/bin/bash
find . -name "*.sh" | sed 's/\.sh//'| cut -c  3-
