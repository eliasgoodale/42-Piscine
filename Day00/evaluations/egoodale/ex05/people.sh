#!/bin/bash
ldapsearch -Q -S cn "(uid=z*)" cn | grep cn: | cut -c 5- |  sort -r
