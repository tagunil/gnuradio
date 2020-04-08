/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/mmse_interp_differentiator_cc.h>
// pydoc.h is automatically generated in the build directory
#include <mmse_interp_differentiator_cc_pydoc.h>

void bind_mmse_interp_differentiator_cc(py::module& m)
{

    using mmse_interp_differentiator_cc    = ::gr::filter::mmse_interp_differentiator_cc;


    py::class_<mmse_interp_differentiator_cc,
        std::shared_ptr<mmse_interp_differentiator_cc>>(m, "mmse_interp_differentiator_cc", D(mmse_interp_differentiator_cc))

        .def(py::init<>(),D(mmse_interp_differentiator_cc,mmse_interp_differentiator_cc,0))
        .def(py::init<gr::filter::mmse_interp_differentiator_cc const &>(),           py::arg("arg0"),
           D(mmse_interp_differentiator_cc,mmse_interp_differentiator_cc,1)
        )


        .def("ntaps",&mmse_interp_differentiator_cc::ntaps,
            D(mmse_interp_differentiator_cc,ntaps)
        )


        .def("nsteps",&mmse_interp_differentiator_cc::nsteps,
            D(mmse_interp_differentiator_cc,nsteps)
        )


        .def("differentiate",&mmse_interp_differentiator_cc::differentiate,
            py::arg("input"),
            py::arg("mu"),
            D(mmse_interp_differentiator_cc,differentiate)
        )

        ;



        py::module m_kernel = m.def_submodule("kernel");







}







