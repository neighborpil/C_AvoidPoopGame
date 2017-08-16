using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using OpenTK;
using OpenTK.Graphics.OpenGL;

namespace OpenTKTest02_Console
{
    class Game
    {
        GameWindow window;

        public Game(GameWindow window)
        {
            this.window = window;

            Start();
        }

        void Start()
        {
            window.Load += loaded;
            window.Resize += resize;
            window.RenderFrame += renderF;
            window.Run(1.0 / 60.0);
        }

        private void resize(object sender, EventArgs e)
        {
            GL.Viewport(0, 0, window.Width, window.Height);
            GL.MatrixMode(MatrixMode.Projection);
            GL.LoadIdentity();
            GL.Ortho(0.0, 50.0, 0.0, 50, -1.0, 1.0);
            GL.MatrixMode(MatrixMode.Modelview);
        }

        private void renderF(object sender, FrameEventArgs e)
        {
            GL.Clear(ClearBufferMask.ColorBufferBit);
            GL.Begin(BeginMode.Triangles);
            GL.Vertex2(1.0, 1.0);
            GL.Vertex2(49.0, 1.0);
            GL.Vertex2(25.0, 49.0);
            GL.End();

            GL.Begin(BeginMode.Polygon);

            GL.Vertex2(10.0, 10.0);
            GL.Vertex2(10.0, 30.0);
            GL.Vertex2(30.0, 30.0);
            GL.Vertex2(30.0, 10.0);

            GL.End();
            window.SwapBuffers();
        }

        private void loaded(object sender, EventArgs e)
        {
            GL.ClearColor(0.0f, 0.0f, 0.0f, 0.0f);
        }
    }
}
