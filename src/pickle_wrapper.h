// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SRC_PICKLE_WRAPPER_H_
#define SRC_PICKLE_WRAPPER_H_

#include <string>

#include "native_mate/handle.h"
#include "native_mate/wrappable.h"
#include "src/pickle.h"

class PickleWrapper : public mate::Wrappable,
                      public Pickle {
 public:
  static mate::Handle<PickleWrapper> Create(v8::Isolate* isolate);

 protected:
  PickleWrapper();
  virtual ~PickleWrapper();

  // Returns a Buffer that contains data().
  v8::Handle<v8::Value> GetData(v8::Isolate* isolate) const;

  // mate::Wrappable:
  virtual mate::ObjectTemplateBuilder GetObjectTemplateBuilder(
      v8::Isolate* isolate);

 private:
  DISALLOW_COPY_AND_ASSIGN(PickleWrapper);
};

#endif  // SRC_PICKLE_WRAPPER_H_
