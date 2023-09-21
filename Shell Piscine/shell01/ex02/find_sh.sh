#!/bin/bash
find .  -name '*.sh' | xargs -I{} basename {} ".sh"
