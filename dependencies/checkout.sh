#!/bin/bash
cd $(dirname $0)
git clone https://${CI_USER_TOKEN}@github.com/nlohmann/json.git
