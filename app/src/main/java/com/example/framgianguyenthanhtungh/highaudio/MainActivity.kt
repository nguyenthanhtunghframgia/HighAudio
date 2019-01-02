package com.example.framgianguyenthanhtungh.highaudio

import android.Manifest
import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import pub.devrel.easypermissions.EasyPermissions

class MainActivity : AppCompatActivity(), EasyPermissions.PermissionCallbacks {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        initPermission()
    }

    private fun initPermission() {
        val perms = arrayOf(Manifest.permission.CAMERA)

        if (EasyPermissions.hasPermissions(this, *perms)) {
            //todo
        } else {
            EasyPermissions.requestPermissions(this, "Need camera", REQUEST_CAMERA_PERMISSION, *perms)
        }
    }

    override fun onRequestPermissionsResult(requestCode: Int, permissions: Array<out String>, grantResults: IntArray) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        EasyPermissions.onRequestPermissionsResult(requestCode, permissions, grantResults, this)
    }

    override fun onPermissionsDenied(requestCode: Int, perms: MutableList<String>) {
        //todo
    }

    override fun onPermissionsGranted(requestCode: Int, perms: MutableList<String>) {
        //todo
    }
}
