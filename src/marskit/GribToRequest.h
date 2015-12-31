/*
 * (C) Copyright 1996-2013 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.
 */

/// @author Baudouin Raoult
/// @author Manuel Fuentes
/// @author Tiago Quintino

/// @date Dec 2015

#ifndef marskit_GribToRequest_H
#define marskit_GribToRequest_H

struct grib_handle;

#include "gribpp/GribHandle.h"

namespace marskit {

class MarsRequest;

//----------------------------------------------------------------------------------------------------------------------

/// Utility class to build MarsRequest from GribHandle

/// Part of this code is taken from mars-client grib.c

class GribToRequest {

public: // methods

	static void handleToRequest(grib_handle * const grib, MarsRequest& req);

	static void handleToRequest(const gribpp::GribHandle& grib, MarsRequest& req);

	static void gribToRequest(void* buffer, size_t length, MarsRequest& req);

private: // methods

	GribToRequest();

	~GribToRequest();
};

//----------------------------------------------------------------------------------------------------------------------

} // namespace marskit

#endif
